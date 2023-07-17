/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/17 15:43:42 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

template < typename T, typename Container = std::deque<T> >
class PmergeMe : public std::deque< Container >
{
	private:
		//int ** _base;
	public:
	PmergeMe(){};
	~PmergeMe(){};

	PmergeMe(const PmergeMe &cpy){*this = cpy;}
	PmergeMe &operator=(const PmergeMe &cpy){
		if (this == cpy)
			*this = cpy;
		return *this;
	}
	typedef typename Container::iterator it;
	it begin(){return this->c.begin();}
	it end(){return this->c.end();}
};
