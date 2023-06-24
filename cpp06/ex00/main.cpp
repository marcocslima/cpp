/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:43:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/24 09:24:19 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "To convert a scalar type one value" << std::endl;
		return 1;
	}
	ScalarConverter c;
	c.setInput(argv[1]);
	std::cout << c.isLiterals() << std::endl;
	std::cout << c.isChar() << std::endl;
	std::cout << c.getC() << std::endl;
	std::cout << c.getI() << std::endl;
	std::cout << c.getF() << std::endl;
	std::cout << c.getD() << std::endl;

	return 0;
}
