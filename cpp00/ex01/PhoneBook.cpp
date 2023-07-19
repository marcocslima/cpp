/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:36:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/16 07:09:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactId(0) , replaceId(0) {}

void	PhoneBook::add()
{
	if (contactId > 7)
	{
		if (replaceId > 7)
			replaceId = 0;
		contacts[replaceId].add();
		++replaceId;
		return ;
	}
	else
	{
		if (contacts[contactId].add() == 1)
		{
			std::cout << "\nError saving the contact. To save a contact, you need to fill in all the fields!\n\n";
			return ;
		}
		contactId++;
	}
}

void	PhoneBook::search() const
{
	std::string	str;
	int			index;

	std::cout << "\n";
	for (int i = 0; i < contactId; i++)
		contacts[i].display(i);
	std::cout << "\nEnter contact id: ";
	getline(std::cin, str);
	if (str[0] < '1' || str[0] > '8')
	{
		std::cout << "\nId must be a number between 1 and 8.\n";
		return ;
	}
	index = std::atoi(str.c_str());
	if (index < 0 || index > contactId)
		std::cout << "\nContact does not exist for the request id.\n";
	else
		contacts[index - 1].print();
}
