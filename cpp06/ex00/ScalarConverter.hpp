/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/25 08:28:21 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <climits>

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
		char		_c;
		int			_i;
		float		_f;
		double		_d;

		std::string	_input;
		char		_type;
		bool		_impossible;
	public:
		ScalarConverter(void);
		~ScalarConverter(void);

		void			setC(char c);
		char			getC(void) const;
		int				getI(void) const;
		float			getF(void) const;
		double			getD(void) const;
		void			setInput(std::string input);
		std::string		getInput(void) const;
		bool			isLiterals(void) const;
		bool			isChar(void);
		bool			isInt(void);
		bool			isFloat(void);
		void			convert(void);

		class SCException : public std::exception {
			virtual const char *what() const throw(){
				return "Error type";
			}
		};
};

#endif
