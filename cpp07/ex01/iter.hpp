/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:50:06 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 20:05:56 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T* array, size_t size, void (*func)(T &)) {
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void	print(T &e)
{
	std::cout << e << " | ";
}
