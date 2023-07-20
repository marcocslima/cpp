/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:43:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/20 14:12:07 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv)
{
	std::string entry = argv[1];

	if (argc != 2)
	{
		std::cout << "To convert a scalar type one value" << std::endl;
		return 1;
	} else if (entry.size() > 1) {
		for (int i = 0; i < (int)entry.size(); i++){
			if(!isdigit(entry[i])){
				std::cerr << "error: invalid input" << std::endl;
				return 1;
			}
		}
	}
	ScalarConverter::convert(argv[1]);

	return 0;
}
