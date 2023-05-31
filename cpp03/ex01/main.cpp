/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:17:46 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/30 04:13:35 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Snack");
	ScavTrap scav2("White Snack");

	scav.attack("Lion");
	scav.beRepaired(20);
	scav.takeDamage(10);
	scav.guardGate();

	return 0;
}
