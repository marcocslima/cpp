/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/25 21:29:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {

	int e = 0;
	int arraySize;
	int entry[argc - 1];

	for (int i = 1; i <= argc - 1; i++){
		int val = std::atoi(argv[i]);
		if (val < INT_MIN || val > INT_MAX || val < 0) {
			std::cout << "Error" << std::endl;
			return 1;
		}
		entry[e++] = val;
	}

	std::vector<int> arrVerif;
	arraySize = sizeof(entry) / sizeof(entry[0]);

	for (int i = 0; i < arraySize; i++) {
		arrVerif.push_back(entry[i]);
	}
	std::sort(arrVerif.begin(), arrVerif.end());

	for (int i = 0; i < arraySize; i++) {
		if (arrVerif[i] == arrVerif[i + 1]){
			std::cout << "Error: the sequence has duplicates !..." << std::endl;
			return 1;
		}
	}

	PmergeMe pm(arraySize);
	pm.initSort(entry, arraySize);

	return 0;
}
