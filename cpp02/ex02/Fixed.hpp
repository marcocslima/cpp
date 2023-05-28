/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:18:10 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/28 01:58:18 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointNumber;
		static const int	_fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const num);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed	&min(Fixed &x, Fixed &y);
		static const Fixed	&min(const Fixed &x, const Fixed &y);
		static Fixed	&max(Fixed &x, Fixed &y);
		static const Fixed	&max(const Fixed &x, const Fixed &y);
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif
