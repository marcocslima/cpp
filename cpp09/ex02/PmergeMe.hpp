/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/18 16:40:09 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

template < typename T, typename Container = std::deque<T> >
class PmergeMe// : public std::deque< Container >
{
	private:
		Container m_container;
	public:
	PmergeMe(){};
	~PmergeMe(){};

	PmergeMe(const PmergeMe &cpy) : m_container(cpy.m_container){};
	PmergeMe &operator=(const PmergeMe &cpy){
		if (this != cpy)
			*this = cpy;
		return *this;
	}

	void addElement(const T& element) {
		m_container.push_back(element);
	}

	typedef typename Container::iterator Iterator;
	Iterator begin(){return m_container.begin();}
	Iterator end(){return m_container.end();}
};

#include "PmergeMe.tpp"