/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 07:31:46 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/06 08:14:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int> numbers;
	for (int i = 0; i < 10; i++)
		numbers.push_back(i + 1);

	easyfind(numbers, 5);
	easyfind(numbers, 15);

	char arr[] = "abcdefg";
	std::list<char> characters(arr, arr + sizeof(arr) / sizeof(arr[0]));

	easyfind(characters, 'e');
	easyfind(characters, 'z');

	return 0;
}
