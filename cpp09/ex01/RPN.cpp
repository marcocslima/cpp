/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:25 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 14:59:04 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(RPN const &cpy){
	*this = cpy;
}

RPN &RPN::operator=(RPN const &cpy){
	if(this == &cpy)
		return *this;
	this->nums = cpy.nums;
	return *this;
}

void RPN::getOperands(char *str){
	int i = 0;
	while (str[i]){
		std::cout << str[i] << std::endl;
		i++;
	}
}
