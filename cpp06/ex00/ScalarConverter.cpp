/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/30 11:33:03 by mcesar-d         ###   ########.fr       */
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
			std::cout << "Impossible" << std::endl;
	} else if (!std::isprint(input[0] - '0')) {
		std::cout << "Non displayable" << std::endl;
	} else {
		std::cout << "'" << input[0] << "'" << std::endl;
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

	etype type = ScalarConverter::verifyInput(input);
	int		retInt;
	float	retFloat;
	double	retDouble;

	switch (type) {
		case CHAR:
			std::cout << CHAR << std::endl;
			ScalarConverter::printChar(input);
			break;
		case INT:
			std::cout << INT << std::endl;
			retInt = static_cast<int>(std::atoi(input.c_str()));
			//retChar = static_cast<char>(retInt);
			retFloat = static_cast<float>(retInt);
			retDouble = static_cast<double>(retInt);
			std::cout << retInt << std::endl;
			break;
		case FLOAT:
			std::cout << FLOAT << std::endl;
			retFloat = static_cast<float>(std::atof(input.c_str()));
			//retChar = static_cast<char>(retFloat);
			retInt = static_cast<int>(retFloat);
			retDouble = static_cast<double>(retFloat);
			std::cout << retFloat << std::endl;
			break;
		case DOUBLE:
			std::cout << DOUBLE << std::endl;
			retDouble = static_cast<double>(std::atof(input.c_str()));
			//retChar = static_cast<char>(retDouble);
			retInt = static_cast<int>(retDouble);
			retFloat = static_cast<float>(retDouble);
			std::cout << retDouble << std::endl;
			break;
		default:
			std::cout << "xxxxxxxxxx" << std::endl;
			break;
	}
}
