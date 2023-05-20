/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:28:08 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 13:22:45 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc!= 4)
	{
		std::cerr << "Usage: ./sed <filename> <to_find> <replace>." << std::endl;
		return (1);
	}
	Sed sed(argv[1]);
	sed.replaceStr(argv[2], argv[3]);

	return 0;
}
