/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:23:13 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/19 05:44:37 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &wType) : type(wType) {};

const std::string &Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string& nType) 
{
	type = nType;
}
