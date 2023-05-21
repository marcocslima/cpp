/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:55:54 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/21 19:14:10 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string	input;
	Harl		harl;

	while(input.compare("exit") != 0)
	{
		std::cout << "\n    Enter exit to terminate or a level > DEBUG, INFO, WARNING, ERROR: ";
		std::cin >> input;
		harl.complain(input);
	}
	return 0;
}
