/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:13:02 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ostream>
#include <utility>

class PmergeMe
{
private:
	int												_left_over;
	std::vector< std::pair<int, int> >				_vector;
	std::deque< std::pair<int, int> >				_deque;
	std::deque< std::pair<int, int> >::iterator		_d_it;
	std::vector< std::pair<int, int> >::iterator	_v_it;
public:
	PmergeMe();
	~PmergeMe();

	PmergeMe(const PmergeMe &cpy);
	PmergeMe &operator=(const PmergeMe &cpy);

	void	createPairs(const int* entry, int n);
	void	sortPairs();

	template < typename Container >
	void mergeSort(Container& input);

	template < typename Container >
	void merge(Container& input, Container& left, Container& right);

	template < typename Container >
	void createSeq(Container& input);
};

#include "PmergeMe.tpp"
