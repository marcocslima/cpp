/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 01:21:13 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/16 07:11:46 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include "Contact.hpp"
#include <cstdlib>

class PhoneBook {
	private:
		Contact		contacts[8];
		int			contactId;
		int			replaceId;
	public:
		PhoneBook();
		void	add();
		void	search() const;
};

#endif
