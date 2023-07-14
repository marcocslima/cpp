/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:22:06 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/14 07:41:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>

typedef struct {
	char			delimiter;
	size_t			pos;
	std::ifstream	d_input;
	int				nline;
	std::string		line;
	int				dateInt;
	float			value;
} Varbase;

class BitcoinExchange
{
	private:
		std::string _input;
		std::string _data;
		std::multimap<int, float> data;
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& input);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cpy);
		BitcoinExchange& operator=(const BitcoinExchange& obj);

		int		dateToInt(std::string date);
		bool	checkEntry(const std::string& str);
		bool	checkValues(const std::string& str);
		void	chargingData(std::string filename);
		void	getResult();
};
