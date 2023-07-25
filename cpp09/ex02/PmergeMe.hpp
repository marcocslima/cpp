/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/25 05:33:20 by mcesar-d         ###   ########.fr       */
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
public:
	PmergeMe();
	~PmergeMe();

	PmergeMe(const PmergeMe &cpy);
	PmergeMe &operator=(const PmergeMe &cpy);

	void				initSort(const int* entry, int n);
	std::vector<int>	buildJacobInSeq(std::vector<int>& arr);
	int					jacobsthal(int n);
	bool				valExists(const std::vector<int>& vec, int val);

	template < typename Container >
	void	sortPairs(Container& input, std::string Name);

	template < typename Container >
	void mergeSort(Container& input);

	template < typename Container >
	void merge(Container& input, Container& left, Container& right);

	template < typename Container >
	void createSeq(Container& input, std::string Name);
};

#include "PmergeMe.tpp"
