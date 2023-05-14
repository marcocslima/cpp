/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:39:41 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/14 05:49:37 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "\nEnter option > ADD | SEARCH | EXIT: ";
		getline(std::cin, command);
		if (command == "EXIT" || command == "exit" || command == "e")
			return (0);
		else if (command == "ADD" || command == "add" || command == "a")
			phonebook.add();
		else if (command == "SEARCH" || command == "search" || command == "s")
			phonebook.search();
		else
			std::cout << "Command not found, accept only > ADD | SEARCH | EXIT.\n";
	}
	return 0;
}
