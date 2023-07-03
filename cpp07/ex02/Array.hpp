/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:53:14 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/03 03:10:05 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T*				array;
		unsigned int	size;
	public:
		Array(void);
		Array(unsigned int n);
		Ãrray(const Array<T>& c);
		
		Array<T>& operator=(Array<T>& c);
		T& operator[](unsigned int i);
		unsigned int size(const Array<T>& a);
};

#include "Array.tpp"
