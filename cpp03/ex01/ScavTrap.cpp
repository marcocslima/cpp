/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 03:26:00 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/31 04:36:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " has just been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has just been destroyed!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoint <= 0){
		std::cout << "ScavTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoint -= 1;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0){
		std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " takes " << amount << " damage points!" << std::endl;
	_hitPoint -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (_energyPoint <= 0){
		std::cout << "ScavTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " has been repaired with " << amount << " hit points!" << std::endl;
	_energyPoint -= 1;
	_hitPoint += amount;
}
