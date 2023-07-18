/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/18 16:11:36 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char* argv[])
{
	PmergeMe< int, std::vector<int> > pm;

	PmergeMe< int, std::vector<int> > pm2 = pm;

	(void)argc;

	int i = 1;
	try {
		while(argv[i])
			pm2.addElement(std::atoi(argv[i++]));

		PmergeMe< int, std::vector<int> >::Iterator it;
		for (it = pm2.begin(); it != pm2.end(); ++it)
			std::cout << *it << " ";

	} catch (const char *msg) {
		std::cerr << msg << std::endl;
	}

	return (0);
}
