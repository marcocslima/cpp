/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:38:31 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/28 20:28:43 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0){
	std::cout << "ClapTrap " << _name << " has just been created!" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap " << _name << " has just been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoint <= 0){
		std::cout << "ClapTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoint <= 0){
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage points!" << std::endl;
	_hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoint <= 0){
		std::cout << "ClapTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " has been repaired with " << amount << " hit points!" << std::endl;
	_energyPoint -= 1;
	_hitPoint += amount;
}
