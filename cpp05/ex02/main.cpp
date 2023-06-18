/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:05:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 15:08:55 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("Clayton", 1);
		ShrubberyCreationForm form_S("Home");
		RobotomyRequestForm form_R("Sophia");
		PresidentialPardonForm form_P("John Doe");
		
		std::cout << BWT << "\n#-------Shrubbery------#" << RESET << std::endl;
		bureaucrat.signForm(form_S);
		bureaucrat.executeForm(form_S);
		std::cout << BWT << "\n#-------Robotomy-------#" << RESET << std::endl;
		bureaucrat.signForm(form_R);
		bureaucrat.executeForm(form_R);
		bureaucrat.executeForm(form_R);
		bureaucrat.executeForm(form_R);
		bureaucrat.executeForm(form_R);
		std::cout << BWT << "\n#-----Presidential-----#" << RESET << std::endl;
		bureaucrat.signForm(form_P);
		bureaucrat.executeForm(form_P);
		std::cout << "\n#-----####################-----#" << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
