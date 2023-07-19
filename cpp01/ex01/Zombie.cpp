/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:59:52 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/18 05:44:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " has been destroyed.\n" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
