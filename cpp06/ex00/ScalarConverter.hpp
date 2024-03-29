/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/21 05:15:42 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cstdlib>

enum etype {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITERALS,
	EMPTY
};

class ScalarConverter
{
	private:
		ScalarConverter(void);

		static etype	verifyInput(const std::string input);
		static bool		isImpossible(const std::string input);
		static bool		isLiterals(const std::string input);
		static bool		isChar(const std::string input);
		static bool		isInt(const std::string input);
		static bool		isFloat(const std::string input);
		static bool		isDouble(const std::string input);
		static void		printChar(const std::string input, long long cod);
		static void		printInt(const std::string input);
		static void		printFloat(const std::string input);
		static void		printDouble(const std::string input);
		static void		print(const std::string input, etype type);
	public:
		~ScalarConverter(void);

		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter &operator=(const ScalarConverter &cpy);
		static void		convert(const std::string input);
};

#endif
