/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:03:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 21:22:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj){
	if (this == &obj){
		return *this;
	}
	this->_grade = obj.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const{
	return this->_name;
}

int			Bureaucrat::getGrade() const{
	return this->_grade;
}

void		Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::signForm(AForm &form){
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << GRN << " signed " << form.getName() << RESET << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << RED << " can´t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(const AForm &form) const{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << RED << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << " grade " << obj.getGrade() << std::endl;
	return out;
}
