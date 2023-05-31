/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:17:46 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/31 05:29:47 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap scav("Snake");
	FragTrap frag("Eagle");

	scav.attack("Lion");
	scav.beRepaired(20);
	scav.takeDamage(10);
	scav.guardGate();

	frag.attack("Snake");
	frag.beRepaired(50);
	frag.takeDamage(20);
	frag.highFivesGuys();

	return 0;
}
