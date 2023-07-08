/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:09:50 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/08 01:34:24 by mcesar-d         ###   ########.fr       */
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
		std::srand((unsigned) time(NULL));
		std::vector<unsigned int> v(1500);
		std::generate(v.begin(), v.end(), std::rand());

		Span span(v.size());
		span.addNumber(v.begin(),v.end());

		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longtest span: " << span.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

