/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/03 11:20:32 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << this->_type << " constructor was called!" << std::endl;
}

Cat::~Cat(void){
	std::cout << this->_type << " destructor was called!" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "meowww!" << std::endl;
}
