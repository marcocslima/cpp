/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:22 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:38:04 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		~Dog(void);

		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);

		void makeSound(void) const;
};

#endif
