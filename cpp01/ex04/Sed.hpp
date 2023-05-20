/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:40:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 13:20:29 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::string _fileIn;
		std::string _fileOut;
	public:
		Sed(std::string file);
		~Sed();
		void	replaceStr(std::string s1, std::string s2);
};

#endif