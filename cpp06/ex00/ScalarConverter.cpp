/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/25 11:01:40 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){
	this->_c = '\0';
	this->_i = 0;
	this->_f = 0.0f;
	this->_d = 0.0;
}

ScalarConverter::~ScalarConverter(void){}

void		ScalarConverter::setInput(std::string input){
	this->_input = input;
	if (isChar()) {
		this->_type = CHAR;
	} else if (isInt()) {
		this->_type = INT;
	} else if (isFloat()) {
		this->_type = FLOAT;
	} else {
		this->_type = EMPTY;
	}
	if (this->_type == EMPTY)
		throw ScalarConverter::SCException();
}

std::string	ScalarConverter::getInput(void) const{
	return this->_input;
}

void		ScalarConverter::setC(char c){
	this->_c = c;
}

char		ScalarConverter::getC(void) const{
	return this->_c;
}

int			ScalarConverter::getI(void) const{
	return this->_i;
}

float		ScalarConverter::getF(void) const{
	return this->_f;
}

double		ScalarConverter::getD(void) const{
	return this->_d;
}

bool		ScalarConverter::isLiterals(void) const{
	std::string lit[] = {"nan","nanf","+inf","+inff","-inf","-inff"};
	for (int i = 0; i < 6; i++)
		if (this->_input.compare(lit[i]) == 0)
			return true;
	return false;
}

bool		ScalarConverter::isChar(void){
	if (this->_input.length() == 1
		&& std::isalpha(this->_input[0])
		&& std::isprint(this->_input[0]))
		{
			this->_c = this->_input[0];
			this->_i = static_cast<int>(this->_c);
			this->_f = static_cast<float>(this->_c);
			this->_d = static_cast<double>(this->_c);
			return true;
		}
	return false;
}

bool		ScalarConverter::isInt(void){
	unsigned long i = 0;
	if (this->_input[i] == '+' || this->_input[i] == '-')
		i++;
	while (i < this->_input.length()){
		if (!std::isdigit(this->_input[i]))
			return false;
		i++;
	}
	this->_i = static_cast<int>(std::atoi(this->_input.c_str()));
	this->_c = static_cast<char>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);
	return true;
}

bool		ScalarConverter::isFloat(void){
	unsigned long	i = 0;
	int				control = 0;
	if (this->_input.find('.') == std::string::npos
		|| this->_input.find('.') == 0
		|| this->_input[this->_input.length() - 1] != 'f'
		|| this->_input.find('.') == this->_input.length() - 2)
		return false;
	if (this->_input[i] == '+' || this->_input[i] == '-')
		i++;
	while (i < this->_input.length() - 1){
		if (this->_input[i] == '.')
			control++;
		if ((!std::isdigit(this->_input[i]) && this->_input[i] != '.')
			|| control > 1)
			return false;
		i++;
	}
	this->_f = static_cast<float>(std::atof(this->_input.c_str()));
	this->_i = static_cast<int>(this->_f);
	this->_c = static_cast<char>(this->_f);
	this->_d = static_cast<double>(this->_f);
	return true;
}

void		ScalarConverter::convert(void){
	switch (_type) {
		case CHAR:
			std::cout << this->_c << std::endl;
			break;
		case INT:
			std::cout << this->_i << std::endl;
			break;
		case FLOAT:
			std::cout << this->_f << std::endl;
			break;
		default:
			std::cout << "xxxxxxxxxx" << std::endl;
			break;
	}
}
