/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:50:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/19 06:10:22 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& hName) : name(hName), weapon(0) {}

void HumanB::setWeapon(Weapon* newWeapon)
{
	weapon = newWeapon;
}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else
	{
		std::cout << name << " is unarmed and cannot attack!" << std::endl;
	}
}
