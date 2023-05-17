/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:05:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/17 01:02:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Define the Zombie name: " << std::flush;
	std::cin >> name;

	Zombie zombie_s(name);

	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Define the Zombie name: " << std::flush;
	std::cin >> name;

	Zombie *zombie_h = newZombie(name);
	zombie_h->announce();
	delete zombie_h;

	std::cout << "Calling randomChump()." << std::endl;
	randomChump("mcl");
	return 0;
}
