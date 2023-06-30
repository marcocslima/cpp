/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:43:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/30 10:33:06 by mcesar-d         ###   ########.fr       */
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
	ScalarConverter::convert(argv[1]);

	return 0;
}
