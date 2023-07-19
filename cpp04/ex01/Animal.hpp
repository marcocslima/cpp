/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 11:59:36 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string type);
		virtual ~Animal();

		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
