/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:36:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/12 09:13:31 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

PhoneBook::PhoneBook() : contactId(0) , replaceId( ) {}

void	PhoneBook::add()
{
    std::cout << contactId << std::endl;
	std::cout << replaceId << std::endl;
	if (contactId == 7)
	{
		if (replaceId == 7)
			replaceId = 0;
		else
			++replaceId;
		contacts[replaceId].add();
		return ;
	}
	else
	{
		contacts[contactId].add();
		contactId++;
	}
}

void	PhoneBook::search() const
{
	std::string	str;
	int			index;

	for (int i = 0; i <= contactId; i++)
		contacts[i].display(i);
	std::cout << "Enter contact id: ";
	getline(std::cin, str);
	if (str[0] < '1' || str[0] > '8')
	{
		std::cout << "Id must be a number between 1 and 8.\n";
		return ;
	}
	index = std::atoi(str.c_str());
	if (index < 0 || index > contactId)
		std::cout << "Contact does not exist for the request id.\n";
	else
		contacts[index - 1].print();
}