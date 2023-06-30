/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/30 20:49:01 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>
#include <iomanip>

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
		~ScalarConverter(void);

		static etype	verifyInput(const std::string input);
		static bool		isImpossible(const std::string input);
		static bool		isLiterals(const std::string input);
		static bool		isChar(const std::string input);
		static bool		isInt(const std::string input);
		static bool		isFloat(const std::string input);
		static bool		isDouble(const std::string input);
		static void		printChar(const std::string input);
		static void		printInt(const std::string input);
		static void		printFloat(const std::string input);
		static void		printDouble(const std::string input);
		static void		print(const std::string input, etype type);
	public:
		static void		convert(const std::string input);

	class SCException : public std::exception {
		virtual const char *what() const throw(){
			return "Error type";
		}
	};
};

#endif
