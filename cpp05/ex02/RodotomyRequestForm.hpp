/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RodotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/10 11:34:48 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RODOTOMYREQUESTFORM_HPP
#define RODOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RodotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RodotomyRequestForm(const std::string &target);
		~RodotomyRequestForm(void);

		RodotomyRequestForm(const RodotomyRequestForm &obj);
		RodotomyRequestForm &operator=(const RodotomyRequestForm &obj);

		void execute(const Bureaucrat &executor) const;
};

#endif
