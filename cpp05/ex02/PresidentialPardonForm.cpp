/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:17 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/10 11:29:12 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), _target(obj._target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	(void)obj;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
