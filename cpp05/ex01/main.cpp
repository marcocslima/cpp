/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:05:09 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/16 14:48:19 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureaucrat("Clayton", 10);
	Bureaucrat bureaucrat_2("Axely", 140);
	Form form("fname", 5, 0);

	std::cout << "\nBureaucrat name: "<< bureaucrat.getName() << std::endl;
	std::cout << "Bureaucrat grade: "<< bureaucrat.getGrade() << std::endl << std::endl;

	try
	{
		for (int i = 0; i < 10; i++) {
			bureaucrat.incrementGrade();
			std::cout << bureaucrat.getName() << " grade: "<< bureaucrat.getGrade() << std::endl;
			bureaucrat.signForm(form);
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Bureaucrat name: "<< bureaucrat_2.getName() << std::endl;
	std::cout << "Bureaucrat grade: "<< bureaucrat_2.getGrade() << std::endl << std::endl;

	try
	{
		for (int i = 0; i < 20; i++) {
			bureaucrat_2.decrementGrade();
			std::cout << bureaucrat_2.getName() << " grade: " << bureaucrat_2.getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	return 0;
}
