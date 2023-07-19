/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 06:39:17 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/02 07:44:52 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main (void) {
	Data		data = {"Bope", 16};
	uintptr_t	serial_data;
	Data*		deserial_data;

	serial_data = Serializer::serialize(&data);
	std::cout << "Serialized data number: " << serial_data << std::endl;

	deserial_data = Serializer::deserialize(serial_data);
	std::cout << "Deserialized data name/age: " << deserial_data->name << " / " << deserial_data->age << std::endl;
}
