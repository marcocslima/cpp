/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:35:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:31:19 by mcesar-d         ###   ########.fr       */
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
}

void PmergeMe::sortPairs(){
	int tmp;

	for (_d_it = _deque.begin(); _d_it != _deque.end(); _d_it++)
		if (_d_it->second < _d_it->first){
			tmp = _d_it->second;
			_d_it->second = _d_it->first;
			_d_it->first = tmp;
		}
	for (_v_it = _vector.begin(); _v_it != _vector.end(); _v_it++)
		if (_v_it->second < _v_it->first){
			tmp = _v_it->second;
			_v_it->second = _v_it->first;
			_v_it->first = tmp;
		}

	mergeSort(_deque);
	mergeSort(_vector);

	createSeq(_deque);
	std::cout << "---------------------------" << std::endl;
	createSeq(_vector);
}
