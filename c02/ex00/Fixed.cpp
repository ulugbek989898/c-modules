/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:46 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/09 17:56:19 by uisroilo         ###   ########.fr       */
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
	std::cout << -
}