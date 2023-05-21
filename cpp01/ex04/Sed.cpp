/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:46:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/21 12:19:14 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file) : _fileIn(file)
{
	this->_fileOut = this->_fileIn + ".replace";
}

Sed::~Sed(void) {}

void	Sed::replaceStr(std::string s1, std::string s2)
{
	std::string content;
	std::ifstream infile;
	std::ofstream outfile;

	infile.open(this->_fileIn.c_str());
	outfile.open(this->_fileOut.c_str());
	if (!infile.is_open() && !outfile.is_open())
	{
		std::cerr << "Error opening files" << std::endl;
		return ;
	}
	while (std::getline(infile, content, '\0'))
	{
		size_t pos = content.find(s1);
		while (pos!= std::string::npos)
		{
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos = content.find(s1);
		}
		outfile << content;
		outfile.close();
	}
	infile.close();
}
