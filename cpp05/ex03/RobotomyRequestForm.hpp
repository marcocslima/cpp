/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/12 08:01:53 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

		void execute(const Bureaucrat &executor) const;
};

#endif
