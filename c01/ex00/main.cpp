/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:45:44 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 14:54:07 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zomb1;
	Zombie	zomb2("Ulugbek");
	Zombie	*zomb3;
	zomb2.announce();

	zomb3 = newZombie("Isroilov");
	randomChump("Kamol");

	delete zomb3;
	// int	*p;
	// p = new int;
	// *p = 12;
	// std::cout << "memory address of p = " << p << std::endl;
	// std::cout << "value of p = " << *p << std::endl;
	// std::cout << "pointing address of p = " << &p << std::endl;

}