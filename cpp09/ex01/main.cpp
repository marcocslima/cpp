/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:23:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 17:43:48 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
	try
	{
		if (argc != 2)
			throw "Type ./RPN numbers and operations with polish notation";

		RPN rpm;
		rpm.getOperands(argv[1]);
	}
	catch (const char *msg)
	{
		std::cerr << msg << '\n';
	}
	return 0;
}
