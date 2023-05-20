/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 05:05:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 09:28:56 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType();
	void				setType(std::string type);
};

#endif