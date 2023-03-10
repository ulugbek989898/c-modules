/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:10:42 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/10 08:05:24 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int					num;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &otherObject);
	Fixed & operator=(Fixed const &otherObject);
	~Fixed();
	int		getValue () const;
	int		getRawBits (void) const;
	void	setRawBits (int const raw);
};
