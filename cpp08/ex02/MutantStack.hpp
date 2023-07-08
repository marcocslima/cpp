/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:50:21 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/08 19:54:20 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <list>
#include <deque>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {}
		~MutantStack() {}

		MutantStack(const MutantStack& cpy) { *this = cpy; }
		MutantStack& operator=(const MutantStack &obj) {
			std::stack<T, Container >::operator=(obj);
			return *this;
		}

		typedef typename Container::iterator iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};
