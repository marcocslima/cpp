/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:05:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/18 05:54:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	std::string	name;
	Zombie*		zombies;
	int			N;

	std::cout << "Creating horde of zombies >>>\n" << std::endl;
	std::cout << "Define the Zombies name: ";
	std::cin >> name;
	std::cout << "Number of Zombies: ";
	std::cin >> N;

	zombies = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		zombies[i].announce();

	delete[] zombies;
	return 0;
}
