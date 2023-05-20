/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:50:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 10:06:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	} else
	{
		std::cout << _name << " is without a weapon to attack " << std::endl;
	}
}
