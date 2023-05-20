/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:49:04 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 09:41:57 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void attack(void) const;
};

#endif
