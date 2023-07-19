/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:03:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/13 07:18:41 by mcesar-d         ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << " grade " << obj.getGrade() << std::endl;
	return out;
}
