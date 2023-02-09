/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 07:46:45 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 09:36:00 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	trap("Ulugbek");

	std::cout << std::endl;
	trap.attack("Enemy");
	trap.takeDamage(40);
	trap.beRepaired(20);
	std::cout << trap;
	trap.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap	trap1("Kamol");
	trap1.takeDamage(120);
	trap1.attack("Enemy1");
	std::cout << trap1;
}