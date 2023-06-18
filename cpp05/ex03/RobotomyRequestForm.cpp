/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 09:47:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), _target(obj._target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	(void)obj;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		static int r;
		if (r % 2 == 0)
			std::cout << RED << "Zzzzzzz, " << this->_target << " has been robotomized!..." << RESET << std::endl;
		else
			std::cout << BLU << "Robotomy failed, " << this->_target << " still ok!..." << RESET << std::endl;
		r++;
	}
}
