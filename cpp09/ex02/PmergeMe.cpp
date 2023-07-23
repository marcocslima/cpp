/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:35:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/23 13:44:55 by mcesar-d         ###   ########.fr       */
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

template < typename Container >
void PmergeMe::mergeSort(Container& input){
	if (input.size() <= 1)
		return;
	Container left, right;
	int mid = input.size() / 2;
	typename Container::iterator it = input.begin();
	for (int i = 0; i < mid; i++, ++it)
		left.push_back(*it);
	for (int i = mid; i < (int)input.size(); i++, ++it)
		right.push_back(*it);
	mergeSort(left);
	mergeSort(right);

	merge(input, left, right);
}

template < typename Container >
void PmergeMe::merge(Container& input, Container& left, Container& right){
	typename Container::iterator it(input.begin()), it_l(left.begin()), it_r(right.begin());

	while (it_l!= left.end() && it_r!= right.end()){
		if (it_l->second < it_r->second){
			*it = *it_l;
			++it;
			++it_l;
		} else {
			*it = *it_r;
			++it;
			++it_r;
		}
	}
	while (it_l != left.end()){
		*it = *it_l;
		++it;
		++it_l;
	}
	while (it_r!= right.end()){
		*it = *it_r;
		++it;
		++it_r;
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

	for (std::deque< std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
		std::cout << "(" << it->first << " , " << it->second << ")" << std::endl;
	std::cout << _left_over << std::endl;
}

