/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 05:06:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/31 05:24:51 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " has just been created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has just been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	if ( this->_energyPoint <= 0 ) {
		std::cout << "FragTrap " << this->_name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " high fives. woo-hoo guys!" << std::endl;
	this->_energyPoint -= 1;
}

void FragTrap::attack(const std::string& target) {
	if (_energyPoint <= 0){
		std::cout << "FragTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoint -= 1;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0){
		std::cout << "FragTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " takes " << amount << " damage points!" << std::endl;
	_hitPoint -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (_energyPoint <= 0){
		std::cout << "FragTrap " << _name << " lost all power!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " has been repaired with " << amount << " hit points!" << std::endl;
	_energyPoint -= 1;
	_hitPoint += amount;
}
