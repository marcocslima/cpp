/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:31:48 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 20:16:47 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void	swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template< typename T >
T	min(T& a, T& b) {
	return a < b ? a : b;
}

template< typename T >
T	max(T& a, T& b) {
	return a > b ? a : b;
}
