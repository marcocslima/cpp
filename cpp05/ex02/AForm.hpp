/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:10:28 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/09 09:10:30 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		~AForm(void);

		AForm(const AForm &obj);
		AForm &operator=(const AForm &obj);

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

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
