/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/30 16:12:20 by mcesar-d         ###   ########.fr       */
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
	} else {
		throw ScalarConverter::SCException();
		return (EMPTY);
	}
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
		// std::cout << "int: " << input[0] - '0' << std::endl;
		// std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(input[0] - '0') << "f" << std::endl;
		// std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(input[0] - '0') << std::endl;
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
	int		retInt = static_cast<int>(strtol(input.c_str(), NULL, 10));
	float	retFloat = static_cast<float>(strtol(input.c_str(), NULL, 10));
	if (ScalarConverter::isLiterals(input)
		|| (!std::isprint(input[0] - '0')
		&& input[0] - '0' >= 127)) {
			std::cout << "float: impossible" << std::endl;;
	} else {
		if (retFloat - retInt == 0)
			std::cout << "float: " << retFloat << ".0f" << std::endl;
		else
			std::cout << "float: " << retFloat << "f" << std::endl;
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

void		ScalarConverter::convert(const std::string input){

	etype	type = ScalarConverter::verifyInput(input);
	int		retInt = input[0] -'0';

	std::ostringstream oss;
	oss << retInt;
	std::string stringValue = oss.str();

	switch (type) {
		case CHAR:
			std::cout << "CHAR" << std::endl;
			ScalarConverter::printChar(input);
			ScalarConverter::printInt(stringValue);
			ScalarConverter::printFloat(stringValue);
			break;
		case INT:
			std::cout << "INT" << std::endl;
			ScalarConverter::printChar(input);
			ScalarConverter::printInt(input);
			ScalarConverter::printFloat(input);
			break;
		case FLOAT:
			std::cout << "FLOAT" << std::endl;
			ScalarConverter::printChar(input);
			ScalarConverter::printInt(input);
			ScalarConverter::printFloat(input);
			break;
		case DOUBLE:
			std::cout << "DOUBLE" << std::endl;
			break;
		default:
			std::cout << "xxxxxxxxxx" << std::endl;
			break;
	}
}
