/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:49:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 09:48:43 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon& weapon);
	void	attack(void) const;
};

#endif
