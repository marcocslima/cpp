/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:22:06 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/12 06:46:24 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

class BitcoinExchange
{
	private:
		std::string _input;
		std::string _data;
		std::multimap<std::string, float> input;
		std::multimap<std::string, float> data;
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& input);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cpy);
		BitcoinExchange& operator=(const BitcoinExchange& obj);

		int		checkEntry(const std::string& str);
		int		checkValues(const std::string& str);
		void	chargingData(std::string filename);
		void	getResult();
};
