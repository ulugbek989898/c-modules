/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:46 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/11 09:16:54 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():num(0)
{
	std::cout << "Default constructor called" << std::endl;
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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	num = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	num = std::roundf(n * (1 << fractionalBits));
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