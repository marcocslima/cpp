/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:13:16 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/05/28 02:18:35 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	//std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNumber = 0;
}

Fixed::Fixed(const int num) : _fixedPointNumber(num << _fractionalBits) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fixedPointNumber(roundf(num * (1 << _fractionalBits))){
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj){
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNumber = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const{
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits(int const num){
	this->_fixedPointNumber = num;
}

int		Fixed::toInt(void) const {
	return this->_fixedPointNumber >> _fractionalBits;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / ( 1 << _fractionalBits );
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj){
	out << obj.toFloat();
		return out;
}

bool	Fixed::operator>(const Fixed &obj) const{
	return this->getRawBits() > obj.getRawBits();
}

bool	Fixed::operator<(const Fixed &obj) const{
	return this->getRawBits() < obj.getRawBits();
}

bool	Fixed::operator>=(const Fixed &obj) const{
	return this->getRawBits() >= obj.getRawBits();
}

bool	Fixed::operator<=(const Fixed &obj) const{
	return this->getRawBits() <= obj.getRawBits();
}

bool	Fixed::operator==(const Fixed &obj) const{
	return this->getRawBits() == obj.getRawBits();
}

bool	Fixed::operator!=(const Fixed &obj) const{
	return this->getRawBits() != obj.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &obj) const{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed &obj) const{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed	&Fixed::operator++(void){
	++this->_fixedPointNumber;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed clone(*this);
	clone._fixedPointNumber = this->_fixedPointNumber++;
	return clone;
}

Fixed	&Fixed::operator--(void){
	++this->_fixedPointNumber;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed clone(*this);
	clone._fixedPointNumber = this->_fixedPointNumber--;
	return clone;
}

Fixed	&Fixed::min(Fixed &x, Fixed &y){
	if(x.getRawBits() < y.getRawBits())
		return x;
	return y;
}

const Fixed	&Fixed::min(const Fixed &x, const Fixed &y){
	if(x.getRawBits() < y.getRawBits())
		return x;
	return y;
}

Fixed	&Fixed::max(Fixed &x, Fixed &y){
	if(x.getRawBits() > y.getRawBits())
		return x;
	return y;
}

const Fixed	&Fixed::max(const Fixed &x, const Fixed &y){
	if(x.getRawBits() > y.getRawBits())
		return x;
	return y;
}
