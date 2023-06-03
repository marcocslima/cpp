/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/03 18:09:31 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "WrongAnimal " << this->_type << " constructor was called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor was called!" << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal makeSound was called!" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}
