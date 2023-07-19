/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:20:53 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/08 09:02:48 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : size(size) {}

Span::~Span(void) {}

Span::Span(const Span &cpy){
	*this = cpy;
}

Span& Span::operator=(const Span &cpy) {
	if (this != &cpy){
		this->size = cpy.size;
		this->N = cpy.N;
	}
	return *this;
}

void Span::addNumber(unsigned int n) {
	if (this->N.size() + 1 > size)
		throw Span::SpanException();
	this->N.push_back(n);
}

void Span::addNumber(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end) {
	if (begin == end)
		throw Span::SpanException();
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

unsigned int Span::shortestSpan() {
	unsigned int distance = INT_MAX;
	if (this->N.size() < 2)
		throw Span::SpanException();
	for (unsigned int i = 0; i < this->N.size(); i++) {
		if (this->N[i + 1] - this->N[i] < distance)
			distance = this->N[i + 1] - this->N[i];
	}
	return distance;
}

unsigned int Span::longestSpan() {
	if (this->N.size() < 2)
		throw Span::SpanException();
	return (*max_element(this->N.begin(), this->N.end())
			- *min_element(this->N.begin(), this->N.end()));
}
