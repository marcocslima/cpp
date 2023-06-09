/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:53:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/09 09:11:46 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0){
	(void)gradeToExecute;
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(void) {}

AForm::AForm(const AForm &obj) : _name(obj.getName()), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExecute()) {}

AForm &AForm::operator=(const AForm &obj){
	this->_signed = obj.getSigned();
	return *this;
}

std::string AForm::getName() const{
	return this->_name;
}

bool AForm::getSigned() const{
	return this->_signed;
}

int AForm::getGradeToSign() const{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const{
	return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &obj){
	out << "Form name: " << obj.getName() << std::endl
		<< "Grade to sign: " << obj.getGradeToSign() << std::endl
		<< "Grade to execute: " << obj.getGradeToExecute() << std::endl;
	return out;
}
