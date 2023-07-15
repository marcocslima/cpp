/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:28:29 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/15 14:55:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::stack<int> nums;
	public:
		RPN();
		~RPN();

		RPN(RPN const &cpy);
		RPN &operator=(RPN const &cpy);
		void getOperands(char *str);
		void calculate(char c);
};
