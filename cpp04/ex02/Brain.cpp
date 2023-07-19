/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:25:48 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 12:15:39 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Constructor Brain was called!" << std::endl;
}

Brain::~Brain(void){
	std::cout << "Destructor Brain was called!" << std::endl;
}

Brain::Brain(const Brain &obj){
	std::cout << "Brain copy constructor was called!" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj){
	std::cout << "Brain assignment operator was called!" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}
