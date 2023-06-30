/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/30 20:55:57 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(void){}

etype	ScalarConverter::verifyInput(std::string input){
	if (isChar(input)) {
		return (CHAR);
	} else if (isInt(input)) {
		return (INT);
	} else if (isFloat(input)) {
		return (FLOAT);
	} else if (isDouble(input)) {
		return (DOUBLE);
	} else if (isLiterals(input)) {
		return (LITERALS);
	} else {
		throw ScalarConverter::SCException();
		return (EMPTY);
	}
}

bool	ScalarConverter::isImpossible(const std::string input){
	try {
		if (ScalarConverter::isInt(input)) {
			int tmp = static_cast<int>(strtol(input.c_str(), NULL, 10));
			(void)tmp;
		} else if (ScalarConverter::isFloat(input)) {
			float tmp = static_cast<float>(atof(input.c_str()));
			(void)tmp;
		}  else if (ScalarConverter::isDouble(input)) {
			double tmp = static_cast<double>(atof(input.c_str()));
			(void)tmp;
		}
	} catch (std::exception& e) {
		return true;
	}
	return false;
}

bool	ScalarConverter::isLiterals(const std::string input){
	std::string lit[] = {"nan","nanf","+inf","+inff","-inf","-inff"};
	for (int i = 0; i < 6; i++)
		if (input.compare(lit[i]) == 0)
			return true;
	return false;
}

bool	ScalarConverter::isChar(const std::string input){
	if (input.length() == 1
		&& std::isalpha(input[0])
		&& std::isprint(input[0]))
			return true;
	return false;
}

void	ScalarConverter::printChar(const std::string input){
	if (ScalarConverter::isLiterals(input)
		|| (!std::isprint(input[0] - '0')
		&& input[0] - '0' >= 127)) {
			std::cout << "char: impossible" << std::endl;
	} else if (!std::isprint(input[0] - '0')) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << input[0] << "'" << std::endl;
	}
}

bool	ScalarConverter::isInt(const std::string input){
	int	i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < (int)input.length()){
		if (!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

void	ScalarConverter::printInt(const std::string input){
	if (ScalarConverter::isLiterals(input)
		|| (!std::isprint(input[0] - '0')
		&& input[0] - '0' >= 127)) {
			std::cout << "int: impossible" << std::endl;;
	} else {
		std::cout << "int: " << static_cast<int>(strtol(input.c_str(), NULL, 10)) << std::endl;
	}
}

bool	ScalarConverter::isFloat(const std::string input){
	int	i = 0;
	int	control = 0;

	if (input.find('.') == std::string::npos
		|| input.find('.') == 0
		|| input[(int)input.length() - 1] != 'f'
		|| input.find('.') == input.length() - 2)
		return false;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < (int)input.length() - 1){
		if (input[i] == '.')
			control++;
		if ((!std::isdigit(input[i]) && input[i] != '.')
			|| control > 1)
			return false;
		i++;
	}
	return true;
}

void	ScalarConverter::printFloat(const std::string input){
	float	retFloat = static_cast<float>(atof(input.c_str()));
	if (ScalarConverter::isLiterals(input)) {
		std::cout << "float: " << input << "f" << std::endl;
	} else if (ScalarConverter::isImpossible(input)) {
		std::cout << "float: impossible" << std::endl;
	} else {
		std::cout << "float: " << std::setprecision(1) << std::fixed << retFloat << "f" << std::endl;
	}
}

bool	ScalarConverter::isDouble(const std::string input){
	int	i = 0;
	int	control = 0;

	if (input.find('.') == std::string::npos
		|| input.find('.') == 0)
		return false;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < (int)input.length()){
		if (input[i] == '.')
			control++;
		if ((!std::isdigit(input[i]) && input[i] != '.')
			|| control > 1)
			return false;
		i++;
	}
	return true;
}

void	ScalarConverter::printDouble(const std::string input){
	double	retDouble = static_cast<double>(atof(input.c_str()));
	if (ScalarConverter::isLiterals(input)) {
		std::cout << "double: " << input << std::endl;
	} else if (ScalarConverter::isImpossible(input)) {
		std::cout << "double: impossible" << std::endl;;
	} else {
		std::cout << "double: " << std::setprecision(1) << std::fixed << retDouble << std::endl;
	}
}

void	ScalarConverter::print(const std::string input, etype type){
	
	int	retInt = input[0] -'0';

	std::ostringstream oss;
	oss << retInt;
	std::string stringValue = oss.str();
	
	ScalarConverter::printChar(input);
	if (type == CHAR) {
		ScalarConverter::printInt(stringValue);
		ScalarConverter::printFloat(stringValue);
		ScalarConverter::printDouble(stringValue);
	} else {
		ScalarConverter::printInt(input);
		ScalarConverter::printFloat(input);
		ScalarConverter::printDouble(input);
	}
}

void	ScalarConverter::convert(const std::string input){

	etype	type = ScalarConverter::verifyInput(input);

	switch (type) {
		case CHAR:
			ScalarConverter::print(input, CHAR);
			break;
		case INT:
			ScalarConverter::print(input, INT);
			break;
		case FLOAT:
			ScalarConverter::print(input, FLOAT);
			break;
		case DOUBLE:
			ScalarConverter::print(input, DOUBLE);
			break;
		case LITERALS:
			ScalarConverter::print(input, LITERALS);
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}
