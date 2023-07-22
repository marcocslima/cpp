/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:35:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/22 10:47:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _left_over(-1){}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) {
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &cpy) {
	if(this == &cpy)
		return *this;
	this->_vector = cpy._vector;
	return *this;
}

void PmergeMe::createPairs(const int* entry, int n) {

	if (n % 2 != 0){
		_left_over = entry[n - 1];
		n--;
	}
	for (int i = 0; i < n; i += 2) {
		std::pair<int, int> newPair(entry[i], entry[i + 1]);
		_vector.push_back(newPair);
		_deque.push_back(newPair);
	}
	for (std::deque< std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
		std::cout << "(" << it->first << " , " << it->second << ")" << std::endl;
	std::cout << _left_over << std::endl;
}

