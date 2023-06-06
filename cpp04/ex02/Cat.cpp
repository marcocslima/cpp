/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:37:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"){
	std::cout << this->_type << " constructor was called!" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &obj) : AAnimal("Cat"){
	std::cout << "Cat copy constructor was called!" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj){
	std::cout << "Cat assignment operator was called!" << std::endl;
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "meowww!" << std::endl;
}
