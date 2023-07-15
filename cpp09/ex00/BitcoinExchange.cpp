/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:33:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 10:51:30 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const std::string& input) : _input(input) {
	this->_data = "data.csv";
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cpy){
	*this = cpy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj){
	if(this != &obj){
		this->_data = obj._data;
		this->_input = obj._input;
	}
	return *this;
}

bool		BitcoinExchange::checkValues(const std::string& str){
	int		month = std::atoi(str.substr(5, 2).c_str());
	int		day = std::atoi(str.substr(8, 2).c_str());
	float	val = std::atof(str.substr(13, str.length() - 13).c_str());

	if ((month < 0 || month > 12) || (day < 0 || day > 31)) {
		std::cout << "Error: bad input => " << str.substr(0, 10) << std::endl;
		return false;
	} else if (val == 0 || val > 1000) {
		std::cout << "Error: to large a number" << std::endl;
		return false;
	} else if (val < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	} else
		return true;
}

bool		BitcoinExchange::checkEntry(const std::string& str){
	int			i = -1;
	int			error = 13;
	std::string	modelEntry = "dddd-dd-dd | ";

	while (++i < (int)str.length()) {
		if (modelEntry[i] == 'd' && std::isdigit(str[i]))
			error--;
		else if (modelEntry[i] == '-' && str[i] == '-')
			error--;
		else if (modelEntry[i] == ' ' && str[i] == ' ')
			error--;
		else if (modelEntry[i] == '|' && str[i] == '|')
			error--;
	}
	if (error > 0) {
		std::cout << "Error: bad input => "<< str << std::endl;
		return false;
	}
	return true;
}

int		BitcoinExchange::dateToInt(std::string date){
	int	dInt = 0;

	dInt = std::atof(date.substr(0, 4).c_str()) * 10000
		+ std::atof(date.substr(5, 2).c_str()) * 100
		+ std::atof(date.substr(8, 2).c_str());
	return dInt;
}

void	BitcoinExchange::chargingData(std::string data) {
	Varbase vbase;

	vbase.delimiter =  ',';
	vbase.nline = 0;
	vbase.d_input.open(data.c_str());
	if (!vbase.d_input){
		std::cerr << "Error: cannot open data file " << data << std::endl;
		vbase.d_input.close();
		return ;
	}
	while(std::getline(vbase.d_input, vbase.line)){
		if (vbase.nline > 0 ){
			vbase.pos = vbase.line.find(vbase.delimiter);
			vbase.dateInt = dateToInt(vbase.line.substr(0, vbase.pos).c_str());
			vbase.value = std::atof(vbase.line.substr(vbase.pos + 1).c_str());
			this->data.insert(std::make_pair(vbase.dateInt, vbase.value));
		}
		vbase.nline++;
	}
	vbase.d_input.close();
}


void	BitcoinExchange::getResult() {
	Varbase vbase;

	vbase.delimiter =  '|';
	vbase.nline = 0;

	chargingData(this->_data);

	vbase.d_input.open(this->_input.c_str());

	if (!vbase.d_input){
		std::cerr << "Error: cannot open data file " << this->_input.c_str() << std::endl;
		vbase.d_input.close();
		return ;
	}

	std::multimap<int, float>::iterator it;
	std::multimap<int, float>::reverse_iterator rit;

	while(std::getline(vbase.d_input, vbase.line)){
		vbase.pos = vbase.line.find(vbase.delimiter);
		if (vbase.nline++ > 0 && checkEntry(vbase.line) && checkValues(vbase.line)){
			vbase.dateInt = dateToInt(vbase.line.substr(0, vbase.pos).c_str());
			vbase.value = std::atof(vbase.line.substr(vbase.pos + 1).c_str());
			it = this->data.lower_bound(vbase.dateInt);
			if (it != this->data.begin() && it != this->data.end()) {
				if (it->first != vbase.dateInt){
					--it;
					std::cout << vbase.line.substr(0, vbase.pos) << " => " << vbase.value << " = "
							<< vbase.value * it->second << std::endl;
				} else {
					std::cout << vbase.line.substr(0, vbase.pos) << " => " << vbase.value << " = "
							<< vbase.value * it->second << std::endl;
				}
			} else {
				rit = this->data.rbegin();
				//rit--;
				std::cout << vbase.line.substr(0, vbase.pos) << " => " << vbase.value << " = "
							<< vbase.value * rit->second << std::endl;
			}
		}
	}
	vbase.d_input.close();
}
