/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:05:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/15 03:40:00 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat bureaucrat("Clayton", 10);
	ShrubberyCreationForm form_1("Shrubbery");
	RobotomyRequestForm form_2("Robotomy");
	PresidentialPardonForm form_3("Presidential");

	try
	{
		bureaucrat.signForm(form_1);
		bureaucrat.executeForm(form_1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
