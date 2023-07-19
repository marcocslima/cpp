/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 07:34:44 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/04 12:10:44 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain	*_brain;
	public:
		WrongCat(void);
		~WrongCat();

		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);

		void makeSound(void) const;
};

#endif
