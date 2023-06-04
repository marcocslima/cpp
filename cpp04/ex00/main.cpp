/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 10:09:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "\n----Testing animals!----\n" << std::endl;
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "Animal type: " << dog->getType() << std::endl;
	std::cout << "Animal type: " << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n----Testing wrong animals!----\n" << std::endl;
	const WrongAnimal *wanimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	std::cout << "Wrong Animal type: " << wcat->getType() << std::endl;
	wcat->makeSound();

	delete wanimal;
	delete wcat;
}
