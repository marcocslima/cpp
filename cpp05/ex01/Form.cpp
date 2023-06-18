/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:53:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 21:23:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0){
	(void)gradeToExecute;
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void) {}

Form::Form(const Form &obj) : _name(obj.getName()), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExecute()) {}

Form &Form::operator=(const Form &obj){
	if (this == &obj){
		return *this;
	}
	this->_signed = obj.getSigned();
	return *this;
}

std::string Form::getName() const{
	return this->_name;
}

bool Form::getSigned() const{
	return this->_signed;
}

int Form::getGradeToSign() const{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const{
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &obj){
	out << "Form name: " << obj.getName() << std::endl
		<< "Grade to sign: " << obj.getGradeToSign() << std::endl
		<< "Grade to execute: " << obj.getGradeToExecute() << std::endl;
	return out;
}
