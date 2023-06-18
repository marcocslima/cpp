/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:50:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 15:48:26 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &obj){
	*this = obj;
}

Intern &Intern::operator=(const Intern &obj){
	(void)obj;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target){
	AForm *tmp;
	
	tmp = new ShrubberyCreationForm(target);

	std::string fNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++){
		if(fNames[i] == name)
			std::cout << fNames[i] << std::endl;
	}
	return tmp;
}
