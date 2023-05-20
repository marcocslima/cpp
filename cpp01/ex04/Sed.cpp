/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:46:34 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/20 13:25:30 by mcesar-d         ###   ########.fr       */
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
	std::string line;
	
	std::ifstream infile(this->_fileIn);
	std::fstream outfile(this->_fileOut, std::ios::in | std::ios::out);
	if (!infile)
	{
		std::cerr << "Error opening files" << std::endl;
		return ;
	}
	while (std::getline(infile, line))
		outfile << line << std::endl;
	infile.close();
	while (std::getline(outfile, line))
	{
		size_t pos = line.find(s1);
		while (pos!= std::string::npos)
		{
			outfile << line.substr(0, pos);
			outfile << s2;
			pos = line.find(s1, pos + s1.length());
		}
		outfile << line.substr(pos);
		outfile << std::endl;
	}
	outfile.close();
}
