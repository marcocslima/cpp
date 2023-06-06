/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 06:32:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:35:59 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		AAnimal(std::string type);
		virtual ~AAnimal();

		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
