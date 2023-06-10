/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RodotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/10 11:47:24 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RodotomyRequestForm.hpp"

RodotomyRequestForm::RodotomyRequestForm(const std::string &target) : AForm("Rodotomy Request Form", 25, 5), _target(target){}

RodotomyRequestForm::~RodotomyRequestForm(void){}

RodotomyRequestForm::RodotomyRequestForm(const RodotomyRequestForm &obj) : AForm(obj), _target(obj._target){}

RodotomyRequestForm &RodotomyRequestForm::operator=(const RodotomyRequestForm &obj) {
	(void)obj;
	return *this;
}

void RodotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		static int r;
		if (r % 2 == 0)
			std::cout << "Zzzzzzz, " << this->_target << " has been robotomized!..." << std::endl;
		else
			std::cout  << "Robotomy failed, " << this->_target << " still ok!..." << std::endl;
	}
}
