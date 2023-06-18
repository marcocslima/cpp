/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:50:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 21:17:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &obj){
	*this = obj;
}

Intern &Intern::operator=(const Intern &obj){
	if (this == &obj){
		return *this;
	}
	*this = obj;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target){

	int			index = 0;
	KeyPointer	dictionary[4];

	dictionary[0].key = "non-existent form";
	dictionary[0].form = NULL;

	dictionary[1].key = "shrubbery creation";
	dictionary[1].form = new ShrubberyCreationForm(target);

	dictionary[2].key = "robotomy request";
	dictionary[2].form = new RobotomyRequestForm(target);

	dictionary[3].key = "presidential pardon";
	dictionary[3].form = new PresidentialPardonForm(target);

	for (int i = 0; i < 4; i++){
		if (dictionary[i].key == name){
			index = i;
			std::cout << "Intern creates " << name << " form !.." << std::endl;
		}
		else
			delete dictionary[i].form;
	}
	if (index == 0)
		std::cout << "Intern can't create " << name << " form !.." << std::endl;
	return dictionary[index].form;
}
