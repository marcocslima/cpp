/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:33:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/12 20:40:36 by mcesar-d         ###   ########.fr       */
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

	if ((month < 0 || month > 12) || (day < 0 || day > 31)){
		std::cout << "Error: invalid date => " << str.substr(0, 10) << std::endl;
		return false;
	} else if (val == 0 || val > 1000){
		std::cout << "Error: invalid value => " << val << std::endl;
		return false;
	} else if (val < 0){
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
	if (error > 0){
		std::cout << "Error: bad input => "<< str << std::endl;
		return false;
	}
	else
		checkValues(str);
	return true;
}

int		BitcoinExchange::dateToInt(std::string date){
	int	dInt = 0;

	dInt = std::atof(date.substr(0, 4).c_str()) * 10000
		+ std::atof(date.substr(5, 2).c_str()) * 100
		+ std::atof(date.substr(8, 2).c_str());
	std::cout << dInt << std::endl;
	return dInt;
}

void	BitcoinExchange::chargingData(std::string data){
	char			delimiter = ',';
	size_t			pos;
	std::ifstream	d_entry;
	int				nline = 0;
	std::string		line;
	int				dateInt;
	float			value;

	d_entry.open(data.c_str());
	if (!d_entry){
		std::cerr << "Error: cannot open data file " << data << std::endl;
		d_entry.close();
		return ;
	}

	while(std::getline(d_entry, line)){
		if (nline > 0 ){
			pos = line.find(delimiter);
			dateInt = dateToInt(line.substr(0, pos).c_str());
			value = std::atof(line.substr(pos + 1).c_str());
			this->data.insert(std::make_pair(dateInt, value));
		}
		nline++;
	}
}


void	BitcoinExchange::getResult(){

	// std::ifstream	d_input;
	// std::string		line;
	// int				nline = -1;

	chargingData(this->_data);

	// d_input.open(this->_input.c_str());
	
	// if (!d_input){
	// 	std::cerr << "Error: cannot open data file " << this->_input.c_str() << std::endl;
	// 	d_input.close();
	// 	return ;
	// }

	// while(std::getline(d_input, line)){
	// 	checkEntry(line);
	// }

}
