/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 07:58:12 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 08:34:26 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base* p = generate();
	std::cout << "p: " << std::endl; 
	identify(p);
	std::cout << "p: " << std::endl;
	identify(*p);
	delete p;
}