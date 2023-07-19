/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:44:18 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/06/18 20:16:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

struct KeyPointer{
	std::string	key;
	AForm 		*form;
};

class Intern
{
	public:
		Intern(void);
		~Intern(void);

		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);

		AForm *makeForm(std::string name, std::string target);
};

#endif
