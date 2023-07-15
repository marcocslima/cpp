/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:23:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 17:26:46 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc < 2){
		std::cerr << "Type ./RPN numbers and operations with polish notation" << std::endl;
	}
	RPN rpm;
	rpm.getOperands(argv[1]);

	//comentário
	
	return 0;
}
