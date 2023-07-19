/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:51:20 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/05 23:28:00 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// Testing the Array class with integers
	Array<int> intArr(5);

	// Assigning values to the elements
	for (int i = 0; i < (int)intArr.size(); i++) {
		intArr[i] = i + 1;
	}

	// Printing the elements
	std::cout << "Printing intArr:" << std::endl;
	for (int i = 0; i < (int)intArr.size(); i++) {
		std::cout << intArr[i] << " ";
	}
	std::cout << std::endl;

	// Testing the copy constructor and assignment operator
	Array<int> intArrCopy(intArr);
	Array<int> intArrAssign;
	intArrAssign = intArr;

	// Modifying elements in the copied arrays
	std::cout << "Modifying intArrayCopy index 0 to 10!" << std::endl;
	intArrCopy[0] = 10;
	intArrAssign[1] = 20;

	// Printing the modified elements in the copied arrays
	std::cout << "Copied array: ";
	for (int i = 0; i < (int)intArrCopy.size(); i++) {
		std::cout << intArrCopy[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Modifying intArrayAssign index 1 to 20!" << std::endl;
	std::cout << "Assigned array: ";
	for (int i = 0; i < (int)intArrAssign.size(); i++) {
		std::cout << intArrAssign[i] << " ";
	}
	std::cout << std::endl;

	// Testing the Array class with characters
	Array<char> charArr(26);

	// Assigning values to the elements
	for (int i = 0; i < (int)charArr.size(); i++) {
		charArr[i] = 'A' + i;
	}

	// Printing the elements
	std::cout << "Printing charArr:" << std::endl;
	for (int i = 0; i < (int)charArr.size(); i++) {
		std::cout << charArr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Printing intArr:" << std::endl;
	for (int i = 0; i < (int)intArr.size(); i++) {
		std::cout << intArr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
