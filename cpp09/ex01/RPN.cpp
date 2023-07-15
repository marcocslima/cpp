/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:25 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 17:52:44 by mcesar-d         ###   ########.fr       */
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

void RPN::calculate(char c){
	(void) c;
}

void RPN::getOperands(char *str){
	int i = 0;
	while (str[i]) {
		if ((isdigit(str[i]) && (isdigit(str[i+1]) || str[i+1] == '\0'))
			|| (str[i] == ' ' && str[i+1] == '\0'))
			throw "Error: invalid input !...";
		else if (isdigit(str[i]))
			nums.push(str[i] - '0');
		else
			calculate(str[i]);
		i++;
		if (str[i] == 0)
			std::cout << nums.top() << std::endl;
	}
}
