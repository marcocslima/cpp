/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:05:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/19 05:44:59 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(const std::string& wType);
	const std::string& getType();
	void setType(std::string& nType);
};

#endif