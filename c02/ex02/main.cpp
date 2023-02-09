/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:23:28 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/11 07:40:28 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(10.00f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << b << std::endl;
	std::cout << b << " > " << c << ": " << (b > c) << std::endl;
	std::cout << b << " < " << c << ": " << (b < c) << std::endl;
	std::cout << b << " >= " << c << ": " << (b >= c) << std::endl;
	std::cout << b << " <= " << c << ": " << (b <= c) << std::endl;
	std::cout << b << " == " << c << ": " << (b == c) << std::endl;
	std::cout << b << " != " << c << ": " << (b != c) << std::endl << std::endl;

	std::cout << "b + 2 = " << b + 2 << std::endl;
	std::cout << "b - 2 = " << b - 2 << std::endl;
	std::cout << "b * 2 = " << b * 2 << std::endl;
	std::cout << "b / 2 = " << b / 2 << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}