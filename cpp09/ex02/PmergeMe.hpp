/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/22 15:32:44 by mcesar-d         ###   ########.fr       */
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
	std::vector<std::pair<int, int> >				_vector;
	std::deque<std::pair<int, int> >				_deque;
	std::deque< std::pair<int, int> >::iterator		_d_it;
	std::vector< std::pair<int, int> >::iterator	_v_it;
public:
	PmergeMe();
	~PmergeMe();

	PmergeMe(const PmergeMe &cpy);
	PmergeMe &operator=(const PmergeMe &cpy);

	void	createPairs(const int* entry, int n);
	void	sortPairs();
	void	sortByLarger();

};
