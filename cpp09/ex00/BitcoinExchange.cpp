/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:33:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/12 07:26:41 by mcesar-d         ###   ########.fr       */
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
		this->data = obj.data;
		this->input = obj.input;
	}
	return *this;
}

int		BitcoinExchange::checkValues(const std::string& str){
	int month = std::atoi(str.substr(5, 2).c_str());
	int day = std::atoi(str.substr(8, 2).c_str());
	float val = std::atof(str.substr(13, str.length() - 13).c_str());

	if ((month < 0 || month > 12) || (day < 0 || day > 31)){
		std::cout << "Error: invalid date => " << str.substr(0, 10) << std::endl;
		return 1;
	} else if (val < 0 || val > 1000){
		std::cout << "Error: invalid value => " << val << std::endl;
		return 1;
	} else
		std::cout << str << std::endl;
	return 0;
}

int		BitcoinExchange::checkEntry(const std::string& str){
	std::string strEntry = "dddd-dd-dd | d";
	int error = 14;
	int i = -1;

	while (++i < (int)str.length()) {
		if (strEntry[i] == 'd' && std::isdigit(str[i]))
			error--;
		else if (strEntry[i] == '-' && str[i] == '-')
			error--;
		else if (strEntry[i] == ' ' && str[i] == ' ')
			error--;
		else if (strEntry[i] == '|' && str[i] == '|')
			error--;
		else if (strEntry[i] == 'd' && str[i] == '-' && i == 13)
			error = error - 100;
	}

	if (error > 0)
		std::cout << "Error: bad input => "<< str << std::endl;
	else if (error < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else
		checkValues(str);
	return 0;
}

void	BitcoinExchange::chargingData(std::string filename){
	char			delimiter;
	size_t			pos;
	std::ifstream	d_entry;
	std::string		line;
	int				nline = -1;

	if (filename == this->_input.c_str())
		delimiter = '|';
	else
		delimiter = ',';
	
	d_entry.open(filename.c_str());
	if (!d_entry){
		std::cerr << "Error: cannot open data file " << filename << std::endl;
		d_entry.close();
		return ;
	}

	while(std::getline(d_entry, line)){
		pos = line.find(delimiter);
		if (++nline > 0)
			checkEntry(line);
		if(pos <= 11)
			this->input.insert(std::make_pair(line.substr(0, pos), std::atof(line.substr(pos + 1).c_str())));
	}

	std::multimap<std::string, float>::iterator it;
	//int value;
	for (it = this->input.begin(); it != this->input.end(); ++it) {
		// try {
		// 	value = std::atof(it->first.substr(0, 4).c_str()) * 10000
		// 	+ std::atof(it->first.substr(5, 7).c_str()) * 100
		// 	+ std::atof(it->first.substr(8, 10).c_str()) * 1;
		// 	std::cout << value << " " << std::endl;
		// 	if (it->second != std::atof(it->first.substr(0, 4).c_str()))
		// 		std::cout << it->second << std::endl;
		// } catch (const std::exception& e) {
		// 	//std::cout << "Erro: " << e.what() << std::endl;
		// }
	}
}

void	BitcoinExchange::getResult(){
	chargingData(this->_input);
}
