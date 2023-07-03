/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:53:02 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/03 03:16:51 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : array(NULL), size(0){}

template <typename T>
Array<T>::Array(unsigned int n){
	array = new T[n];
	for (int i = 0; i < (int)n; i++)
		array[i] = 0;
}
