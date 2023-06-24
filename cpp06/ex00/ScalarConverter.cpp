/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/24 09:20:52 by mcesar-d         ###   ########.fr       */
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
