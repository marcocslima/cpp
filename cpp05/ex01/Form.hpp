/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:53:57 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/08 14:07:00 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		~Form(void);

		Form(const Form &obj);
		Form &operator=(const Form &obj);

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(const Bureaucrat & bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too high !...";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too low !...";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
