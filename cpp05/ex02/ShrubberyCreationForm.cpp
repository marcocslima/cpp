/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/15 04:33:38 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	(void)obj;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedExcepton();
	else if (executor.getGrade() > this->getGradeToExecute()) {
		throw AForm::GradeTooLowException();
	}
	
	std::ofstream file((this->getName() + "_shrubbery").c_str());
	file << "            *             " << std::endl;
	file << "           / \\           " << std::endl;
	file << "          /   \\          " << std::endl;
	file << "         / @   \\         " << std::endl;
	file << "        /    @  \\        " << std::endl;
	file << "       / @       \\       " << std::endl;
	file << "      /         @ \\      " << std::endl;
	file << "     /_____________\\     " << std::endl;
	file << "           | |            " << std::endl;
	file << "           | |            " << std::endl;
	file << "           | |            " << std::endl;
	file << "           | |            " << std::endl;
	file << "##########################" << std::endl;
	file.close();
}
