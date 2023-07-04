/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:53:14 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/04 21:56:33 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array<T>& c);
		
		Array<T>& operator=(Array<T> &c);
		T& operator[](unsigned int i) const;
		unsigned int size(void) const;

	class OutOfBoundsException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Index is out of bounds";
			}
	};
};

#include "Array.tpp"
#endif
