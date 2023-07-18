/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/18 07:28:58 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(void)
{
	PmergeMe< int, std::vector<int> > pm;

	pm.addElement(10);
	pm.addElement(20);
	pm.addElement(30);

	PmergeMe< int, std::vector<int> >::Iterator it;
	for (it = pm.begin(); it != pm.end(); ++it) {
		std::cout << *it << " ";
	}

	return (0);
}
