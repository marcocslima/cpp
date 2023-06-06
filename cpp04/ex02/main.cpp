/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:38:52 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << "\n----Testing deep copies!----\n" << std::endl;

	Dog basic;
	Dog *a = &basic;
	{
		Dog tmp = basic;
		Dog *b = &tmp;
		tmp.makeSound();
		basic.makeSound();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}

	std::cout << "\n----Testing create array of animals!----\n" << std::endl;

	const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
	}

	return 0;
}
