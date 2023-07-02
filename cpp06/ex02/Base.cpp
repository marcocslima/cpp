/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 07:54:56 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 08:41:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {}

Base*	generate(void){
	if (std::rand() % 3 == 0)
		return (new A);
	else if (std::rand() % 3 == 1)
		return (new B);
	else
		return (new C);
	return (NULL);
}

void	identity(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "not identified" << std::endl;
}

void	identify(Base& p){
	try{
		(void) dynamic_cast<A&>(p);
	} catch(const std::exception &e){}
	try{
		(void) dynamic_cast<B&>(p);
	} catch(const std::exception &e){}
	try{
		(void) dynamic_cast<C&>(p);
	} catch(const std::exception &e){}
}
