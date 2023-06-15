/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:47:40 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/12 07:30:43 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

		void execute(const Bureaucrat &executor) const;
};

#endif
