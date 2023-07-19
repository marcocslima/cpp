/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:33:57 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:56:48 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal " << this->_type << " constructor was called!" << std::endl;
}

Animal::~Animal(void){
	std::cout << "Animal destructor was called!" << std::endl;
}

Animal::Animal(const Animal &obj){
	std::cout << "Animal copy constructor was called!" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj){
	std::cout << "Animal assignment operator was called!" << std::endl;
	this->_type = obj._type;
	return *this;
}

void Animal::makeSound(void) const{
	std::cout << "Animal makeSound was called!" << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}
