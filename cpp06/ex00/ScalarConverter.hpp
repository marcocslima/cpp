/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:47:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/24 09:23:16 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <climits>

class ScalarConverter
{
	private:
		char		_c;
		int			_i;
		float		_f;
		double		_d;

		std::string	_input;
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
};

#endif
