/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/03 18:04:20 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "Animal type: " << dog->getType() << std::endl;
	std::cout << "Animal type: " << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;
}
