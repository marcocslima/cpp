/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 06:02:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/19 06:14:54 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	Weapon weapon_1("Sword");
	HumanA humanA("John", weapon_1);
	HumanB humanB("Mike");

	humanA.attack();

	Weapon weapon_2("Ax");
	humanB.setWeapon(&weapon_2);

	humanB.attack();

	return 0;
}
