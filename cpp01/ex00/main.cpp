/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:05:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/17 05:56:30 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	std::string name;

	std::cout << "\nCreating zombie on the stack >>>\n" << std::endl;
	std::cout << "Define the Zombie name: ";
	std::cin >> name;
	Zombie zombie_stack(name);
	zombie_stack.announce();

	std::cout << "Creating zombie on the heap >>>\n" << std::endl;
	std::cout << "Define the Zombie name: ";
	std::cin >> name;
	Zombie *zombie_heap = newZombie(name);
	zombie_heap->announce();

	std::cout << "Calling randomChump() function, Zombie name = Crazy " << std::endl;
	randomChump("Crazy");

	delete zombie_heap;

	return 0;
}
