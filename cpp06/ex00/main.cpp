/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:43:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/20 17:10:42 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv)
{
	int i = 0;

	if (argc != 2)
	{
		std::cout << "To convert a scalar type one value" << std::endl;
		return 1;
	} else {
		std::string entry = argv[1];
		if(entry[0] == '-' && (int)entry.size() > 1)
			i++;
		while ( i < (int)entry.size()){
			if(isdigit(entry[i]) && entry[i] != '-'){
				std::cerr << "error: invalid input" << std::endl;
				return 1;
			}
			i++;
		}
	}
	ScalarConverter::convert(argv[1]);

	return 0;
}
