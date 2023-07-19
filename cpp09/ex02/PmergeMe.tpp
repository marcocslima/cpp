/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:15:50 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/19 02:47:00 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename Container>
PmergeMe<T, Container>::PmergeMe() {}

template <typename T, typename Container>
PmergeMe<T, Container>::~PmergeMe() {}

template <typename T, typename Container>
PmergeMe<T, Container>::PmergeMe(const PmergeMe &cpy) : _container(cpy._container), _pairs(cpy._pairs) {}

template <typename T, typename Container>
PmergeMe<T, Container> &PmergeMe<T, Container>::operator=(const PmergeMe &cpy) {
	if (this != &cpy) {
		_container = cpy._container;
		_pairs = cpy._pairs;
	}
	return *this;
}

template <typename T, typename Container>
void PmergeMe<T, Container>::addElement(const T& element) {
	_container.push_back(element);
}

template <typename T, typename Container>
void PmergeMe<T, Container>::createPairs() {
	_pairs.clear();

	if (_container.size() % 2 == 0) {
		for (typename Container::iterator it = _container.begin(); it != _container.end(); it += 2) {
			Container pair(it, it + 2);
			_pairs.push_back(pair);
		}
	} else {
		std::cout << "O tamanho do container deve ser par para criar pares de arrays." << std::endl;
	}
}

template <typename T, typename Container>
typename PmergeMe<T, Container>::Iterator PmergeMe<T, Container>::begin() {
	return _container.begin();
}

template <typename T, typename Container>
typename PmergeMe<T, Container>::Iterator PmergeMe<T, Container>::end() {
	return _container.end();
}

template <typename T, typename Container>
const std::vector<Container>& PmergeMe<T, Container>::getPairs() const {
	return _pairs;
}

