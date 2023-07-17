/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:37:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/17 16:15:18 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <array>

template < typename T, typename Container = std::deque<T> >
class PmergeMe : public std::deque< Container >
{
	private:
		Container< std::array<int, 2> > _base;
	public:
	PmergeMe(){};
	~PmergeMe(){};

	PmergeMe(const PmergeMe &cpy){*this = cpy;}
	PmergeMe &operator=(const PmergeMe &cpy){
		if (this == cpy)
			*this = cpy;
		return *this;
	}
	void setBase(int a, int b){
		_base = {{a,b}};
	}
	typedef typename Container::iterator it;
	it begin(){return this->c.begin();}
	it end(){return this->c.end();}
};
