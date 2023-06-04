/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:17 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 09:59:19 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

Dog::~Dog(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "woof woof!" << std::endl;
}
