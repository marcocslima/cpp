/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:17:46 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/31 05:30:11 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Snake");
	ScavTrap scav2("White Snake");

	scav.attack("Lion");
	scav.beRepaired(20);
	scav.takeDamage(10);
	scav.guardGate();

	return 0;
}
