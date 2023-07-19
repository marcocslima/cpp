/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/19 02:45:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ostream>

template < typename T, typename Container = std::deque<T> >
class PmergeMe
{
private:
	Container _container;
	std::vector<Container> _pairs;

public:
	PmergeMe();
	~PmergeMe();

	PmergeMe(const PmergeMe &cpy);
	PmergeMe &operator=(const PmergeMe &cpy);

	void addElement(const T& element);
	void createPairs();
	const std::vector<Container>& getPairs() const;

	typedef typename Container::iterator Iterator;
	Iterator begin();
	Iterator end();
};

#include "PmergeMe.tpp"
