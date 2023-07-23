/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/23 12:45:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {

	int e = 0;
	int arraySize;
	int pairsSize;
	int entry[argc - 1];
	PmergeMe pm;

	for (int i = 1; i <= argc - 1; i++){
		int val = std::atoi(argv[i]);
		entry[e++] = val;
	}

	arraySize = sizeof(entry) / sizeof(entry[0]);

	if(arraySize % 2 != 0)
		pairsSize = (arraySize - 1) / 2;
	else
		pairsSize = arraySize / 2;

	std::cout << pairsSize << std::endl;
	
	pm.createPairs(entry, arraySize);
	pm.sortPairs();

	return 0;
}
