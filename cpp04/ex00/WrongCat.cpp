/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:40 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 10:11:02 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << "woof woof!" << std::endl;
}
