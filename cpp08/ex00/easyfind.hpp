/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 07:32:51 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/06 08:00:26 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void easyfind(const T &container, int value){
	if (std::find(container.begin(), container.end(), value) != container.end()){
		std::cout << "Value " << value << " was found !.." << std::endl;
	} else {
		std::cout << "Value " << value << " was not found !.." << std::endl;
	}
}
