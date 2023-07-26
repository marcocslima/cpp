/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:10:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/26 08:22:36 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <ctime>

class Span
{
	private:
		unsigned int				size;
		std::vector<unsigned int>	N;
	public:
		Span(unsigned int size);
		~Span(void);
		
		Span(Span const& cpy);
		Span &operator=(const Span &cpy);
		void addNumber(unsigned int n);
		void addNumber(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class SpanException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Error: invalid input";
			}
		};
};
