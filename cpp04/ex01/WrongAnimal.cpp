/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 12:17:11 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "Wrong animal " << this->_type << " constructor was called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Wrong animal destructor was called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj){
	std::cout << "Wrong animal copy constructor was called!" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj){
	std::cout << "Wrong animal assignment operator was called!" << std::endl;
	this->_type = obj._type;
	return *this;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Wrong animal makeSound was called!" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}
