/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:49:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 20:15:16 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr_i[] = {100, 200, 300, 400, 500};
	std::cout << "Int array: ";
	iter(arr_i, 5, &print);
	std::cout << std::endl;

	char arr_c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	std::cout << "Char array: ";
	iter(arr_c, 6, &print);
	std::cout << std::endl;

	return 0;
}
