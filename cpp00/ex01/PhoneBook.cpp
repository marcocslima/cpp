/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:36:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/11 05:19:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

PhoneBook::PhoneBook() : contactId(0) {}

void	PhoneBook::add()
{
	if (contactId == 8)
	{
		if (replaceId > 7)
			replaceId = 1;
		else
			++replaceId;
		contacts[replaceId].add();
		return ;
	}
	else
	{
		contactId++;
		contacts[contactId].add();
	}
}

void	PhoneBook::search() const
{
	std::string	str;
	int			index;

	for (int i = 1; i <= contactId; i++)
		contacts[i].display(i);
	std::cout << "Enter contact id: ";
	getline(std::cin, str);
	if (str[0] < '0' || str[0] > '9')
	{
		std::cout << "Id must be a number between 0 and 9.\n";
		return ;
	}
	index = std::atoi(str.c_str());
	if (index < 0 || index > contactId)
		std::cout << "Contact does not exist for the request id.\n";
	else
		contacts[index].print();
}