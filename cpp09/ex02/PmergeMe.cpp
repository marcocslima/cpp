/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:35:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/24 22:13:48 by mcesar-d         ###   ########.fr       */
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

void PmergeMe::initSort(const int* entry, int n) {

	if (n % 2 != 0){
		_left_over = entry[n - 1];
		n--;
	}
	for (int i = 0; i < n; i += 2) {
		std::pair<int, int> newPair(entry[i], entry[i + 1]);
		_vector.push_back(newPair);
		_deque.push_back(newPair);
	}

	sortPairs(_vector);
	sortPairs(_deque);
}

int PmergeMe::jacobsthal(int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

std::vector<int> PmergeMe::buildJacobInSeq(std::vector<int>& arr) {
	int					i = 0;
	int					size = arr.size();
	int					jacobIndex = 3;
	std::vector<int>	end_seq;
	
	while (jacobsthal(jacobIndex) < size - 1) {
		end_seq.insert(end_seq.begin() + i, jacobsthal(jacobIndex));
		jacobIndex += 1;
		i++;
	}
	return end_seq;
}

bool PmergeMe::valExists(const std::vector<int>& vec, int val){
	for (int i = 0; i < (int)vec.size(); i++)
		if (vec[i] == val)
			return true;
	return false;
}
