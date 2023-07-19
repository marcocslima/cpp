/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:13 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/06 06:36:52 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		~Cat();

		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);

		void makeSound(void) const;
};

#endif
