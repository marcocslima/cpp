/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 06:40:43 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/18 14:14:24 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){}

Serializer::~Serializer(void){}

Serializer::Serializer(const Serializer &cpy){
	*this = cpy;
}

Serializer &Serializer::operator=(const Serializer &cpy){
	if (this!= &cpy)
		*this = cpy;
	return *this;
}

uintptr_t	Serializer::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
