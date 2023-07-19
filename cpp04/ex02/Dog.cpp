/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:17 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:38:15 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"){
	std::cout << this->_type << " constructor was called!" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &obj) : AAnimal("Dog"){
	std::cout << "Dog copy constructor was called!" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj){
	std::cout << "Dog assignment operator was called!" << std::endl;
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "woof woof!" << std::endl;
}
