/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:53:02 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/04 21:58:29 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	_array = new T[_size];
	for (int i = 0; i < (int)_size; i++)
		_array[i] = 0;
}

template <typename T>
Array<T>::~Array() {
	if (_size)
		delete[] _array;
}

template <typename T>
Array<T>::Array(const Array<T>& c) {
	*this = c;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &c) {
	if (this != c){
		delete[] _array;
		_array = new T[c._size()];
		size = c._size;
		for (int i = 0; i < (int)_size; i++)
			_array[i] = c._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const {
	if (i >= _size)
		throw OutOfBoundsException();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return _size;
}
