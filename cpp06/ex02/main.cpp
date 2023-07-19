/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 07:58:12 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 13:51:27 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base* p = generate();
	std::cout << "Pointer: ";
	identify(p);
	std::cout << "Pointer: ";
	identify(*p);
	delete p;
}