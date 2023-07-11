/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:33:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/11 07:18:32 by mcesar-d         ###   ########.fr       */
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

void BitcoinExchange::chargingData(std::string filename){
	char			delimiter;
	size_t			pos;
	std::ifstream	d_entry;
	std::string		line;

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
		if(pos > 11)
			pos = line.find(' ');
		this->input.insert(std::make_pair(line.substr(0, pos), std::atof(line.substr(pos + 1).c_str())));
	}
	std::multimap<std::string, float>::iterator it;
	int value;
	for (it = this->input.begin(); it != this->input.end(); ++it) {
		try {
			value = std::atof(it->first.substr(0, 4).c_str()) * 10000
			+ std::atof(it->first.substr(5, 7).c_str()) * 100
			+ std::atof(it->first.substr(8, 10).c_str()) * 1;
			std::cout << value << " " << std::endl;
			if (it->second != std::atof(it->first.substr(0, 4).c_str()))
				std::cout << it->second << std::endl;
		} catch (const std::exception& e) {
			//std::cout << "Erro: " << e.what() << std::endl;
		}
	}
}

void BitcoinExchange::getResult(){
	chargingData(this->_input);
}
