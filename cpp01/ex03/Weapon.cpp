/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:23:13 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 09:33:12 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon(){}

const	std::string &Weapon::getType()
{
	return this->type;
}

void	Weapon::setType(const std::string newType) 
{
	this->type = newType;
}
