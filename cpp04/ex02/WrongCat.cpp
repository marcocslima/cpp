/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:40 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 12:27:24 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat"){
	std::cout << this->_type << " constructor was called!" << std::endl;
	this->_brain = new Brain();
}

WrongCat::~WrongCat(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
	delete this->_brain;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal("Wrong Cat"){
	std::cout << "WrongCat copy constructor was called!" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj){
	std::cout << "WrongCat assignment operator was called!" << std::endl;
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
	return *this;
}

void WrongCat::makeSound(void) const{
	std::cout << "woof woof!" << std::endl;
}
