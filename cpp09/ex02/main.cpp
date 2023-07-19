/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/19 02:44:11 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
	PmergeMe< int, std::vector<int> > pm;

	if (argc < 2) {
		std::cout << "Usage:./PmergeMe <input int sequence>" << std::endl;
		return 1;
	}

	int i = 1;
	while(argv[i])
		pm.addElement(std::atoi(argv[i++]));

	pm.createPairs();

	const std::vector< std::vector<int> >& pairs = pm.getPairs();
	for (typename std::vector< std::vector<int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
		const std::vector<int>& pair = *it;
		for (typename std::vector<int>::const_iterator it2 = pair.begin(); it2 != pair.end(); ++it2) {
			std::cout << *it2 << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
