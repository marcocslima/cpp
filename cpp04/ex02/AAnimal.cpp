/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 06:33:55 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:55:34 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "Animal " << this->_type << " constructor was called!" << std::endl;
}

AAnimal::~AAnimal(void){
	std::cout << "Animal destructor was called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj){
	std::cout << "Animal copy constructor was called!" << std::endl;
	*this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj){
	std::cout << "Animal assignment operator was called!" << std::endl;
	this->_type = obj._type;
	return *this;
}

// void AAnimal::makeSound(void) const{
// 	std::cout << "Animal makeSound was called!" << std::endl;
// }

std::string AAnimal::getType() const{
	return this->_type;
}
