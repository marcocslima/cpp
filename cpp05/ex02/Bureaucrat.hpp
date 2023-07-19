/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:03:47 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 09:49:20 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

#define GRN "\e[0;32m"
#define BLU "\e[0;34m"
#define RED "\e[0;35m"
#define CYN "\e[0;36m"
#define BWT "\e[1;37m"
#define RESET "\e[0m"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat(void);

		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);

		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();

		void		signForm(AForm &form);

		void		executeForm(const AForm &form) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "grade too high !...";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "grade too low !...";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
