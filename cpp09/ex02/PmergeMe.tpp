/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:45:53 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:29:09 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PmergeMe.hpp"

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

template < typename Container >
void PmergeMe::createSeq(Container& input){
	int len = input.size();
	int	seq[(int)len];
	int	pend[(int)len];
	int	i = 0;

	typename Container::iterator it(input.begin());

	while (it!= input.end()){
		seq[i] = it->second;
		pend[i] = it->first;
		++it;
		++i;
	}
	for (i = 0; i < (int)len; i++)
		std::cout << "seq: " << seq[i] << std::endl;
	for (i = 0; i < (int)len; i++)
		std::cout << "pend: " << pend[i] << std::endl;
}