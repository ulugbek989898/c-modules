/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:10:42 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/10 12:58:38 by uisroilo         ###   ########.fr       */
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
	Fixed();
	Fixed (const int n);
	Fixed (const float n);
	Fixed(const Fixed &otherObject);
	Fixed & operator=(Fixed const &otherObject);
	~Fixed();
	int		getValue () const;
	int		getRawBits (void) const;
	void	setRawBits (int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
