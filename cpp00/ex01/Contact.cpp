/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:35:43 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/12 08:44:04 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add()
{
	std::cout << "first name: ";
	getline(std::cin, first_name);
	std::cout << "last name: ";
	getline(std::cin, last_name);
	std::cout << "nickname: ";
	getline(std::cin, nickname);
	std::cout << "phone number: ";
	getline(std::cin, phone_number);
	std::cout << "darkest secret: ";
	getline(std::cin, darkest_secret);
}

void	display_contact(std::string str)
{
	std::cout << "|";
	if (str.length() < 10)
		std::cout << std::setw(10) << std::right << str;
	else
		std::cout << std::right << str.substr(0, 9) << ".";
}

void	Contact::display(int index) const
{
	std::cout << std::setw(10) << std::right << index + 1;
	display_contact(first_name);
	display_contact(last_name);
	display_contact(nickname);
	std::cout << "\n";
}

void	Contact::print() const
{
	std::cout << "first name: " << first_name << "\n";
	std::cout << "last name: " << last_name << "\n";
	std::cout << "nickname: " << nickname << "\n";
	std::cout << "phone number: " << phone_number << "\n";
	std::cout << "darkest secret: " << darkest_secret << "\n";
}
