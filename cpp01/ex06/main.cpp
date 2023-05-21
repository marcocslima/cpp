/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:55:54 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/21 19:52:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string input = argv[1];
	Harl		harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter and level > DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}

	harl.complain(input);
	return 0;
}
