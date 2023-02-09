/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:10:42 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/11 07:38:34 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					num;
	static const int	fractionalBits = 8;
public:
	Fixed(); //ex00
	Fixed (const int n); //ex01
	Fixed (const float n); //ex01
	Fixed(const Fixed &otherObject);	//copy constructor
	~Fixed(); //ex00
	int		getValue () const; //ex00
	int		getRawBits (void) const; //ex00
	void	setRawBits (int const raw); //ex00
	float	toFloat( void ) const; //ex01
	int		toInt( void ) const;  //ex01

	Fixed & operator=(Fixed const &otherObject); //assign operator ex00
	Fixed	operator/(const Fixed &otherObject) const;	 //ex02
	Fixed	operator*(const Fixed &otherObject) const;	//ex02 
	Fixed	operator+(const Fixed &otherObject) const;	//ex02
	Fixed	operator-(const Fixed &otherObject) const;	//ex02
	bool	operator==(const Fixed &otherObject) const; //ex02
	bool	operator!=(const Fixed &otherObject) const; //ex02
	bool	operator>(const Fixed &otherObject) const; //ex02
	bool	operator<(const Fixed &otherObject) const; //ex02
	bool	operator>=(const Fixed &otherObject) const; //ex02
	bool	operator<=(const Fixed &otherObject) const; //ex02
	
	Fixed	operator++(); //pre increment
	Fixed	operator++(int); //post increment
	Fixed	operator--(); //pre decrement
	Fixed	operator--(int); //post decrement

	static Fixed &max(Fixed &ref1, Fixed &ref2);
	static const Fixed &max(Fixed const &ref1, Fixed const &ref2);
	static Fixed &min(Fixed &ref1, Fixed &ref2);
	static const Fixed &min(Fixed const &ref1, Fixed const &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
