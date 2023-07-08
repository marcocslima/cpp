/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:09:50 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/08 09:06:56 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "***********Basic Test***********" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << "***********Big Test***********" << std::endl;
	try
	{
		unsigned int len = 10000;
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		std::vector<unsigned int> v;
		for (unsigned int i = 0; i < len; i++) {
			unsigned int randomNum = static_cast<unsigned int>(std::rand());
			v.push_back(randomNum % len);
		}
		
		Span span_big = Span(len);
		span_big.addNumber(v.begin(), v.end());

		std::cout << "Shortest span: " << span_big.shortestSpan() << std::endl;
		std::cout << "Longtest span: " << span_big.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

