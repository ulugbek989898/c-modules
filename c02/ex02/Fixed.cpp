/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:46 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/11 07:40:56 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():num(0)		//default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)	//parametir int constructor
{
	std::cout << "Int constructor called" << std::endl;
	num = n << fractionalBits;
}

Fixed::Fixed(const float n)		//parametir float constructor
{
	std::cout << "Float constructor called" << std::endl;
	num = std::roundf(n * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &otherObject)
{
	num = otherObject.num;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getValue() const
{
	return (num);
}

Fixed	&Fixed::operator= (Fixed const &otherObject)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = otherObject.getValue();
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

int	Fixed::toInt() const
{
	return (num >> fractionalBits);
}

float	Fixed::toFloat() const
{
	return static_cast<float>(num) / (1 << fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed)
{
	out << Fixed.toFloat();
	return out;
}

Fixed	Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->num++;
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->num--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->num--;
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &otherObject) const
{
	Fixed	temp(this->toFloat() / otherObject.toFloat());

	return (temp);
}

Fixed	Fixed::operator*(const Fixed &otherObject) const
{
	Fixed	temp(this->toFloat() * otherObject.toFloat());

	return (temp);
}

Fixed	Fixed::operator+(const Fixed &otherObject) const
{
	Fixed	temp;
	temp.num = this->num + otherObject.num;
	return (temp);
}

Fixed	Fixed::operator-(const Fixed &otherObject) const
{
	Fixed	temp;
	temp.num = this->num - otherObject.num;
	return (temp);
}

bool	Fixed::operator==(const Fixed &otherObject) const
{
	return (this->num == otherObject.num);
}

bool	Fixed::operator!=(const Fixed &otherObject) const
{
	return (this->num != otherObject.num);
}

bool	Fixed::operator>(const Fixed &otherObject) const
{
	return (this->num > otherObject.num);
}

bool	Fixed::operator<(const Fixed &otherObject) const
{
	return (this->num < otherObject.num);
}

bool	Fixed::operator>=(const Fixed &otherObject) const
{
	return (this->num >= otherObject.num);
}

bool	Fixed::operator<=(const Fixed &otherObject) const
{
	return (this->num <= otherObject.num);
}

const Fixed& Fixed::max(Fixed const &ref1, Fixed const &ref2) {
	if (ref1 <= ref2)
		return ref2;
	return ref1;
}

Fixed&  Fixed::min(Fixed &ref1, Fixed &ref2) {
	if (ref1 >= ref2)
		return ref2;
	return ref1;
}

const Fixed& Fixed::min(Fixed const &ref1, Fixed const &ref2) {
	if (ref1 >= ref2)
		return ref2;
	return ref1;
}
