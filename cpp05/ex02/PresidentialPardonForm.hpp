/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:22 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/10 11:29:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

		void execute(const Bureaucrat &executor) const;
};

#endif
