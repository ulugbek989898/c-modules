/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 07:46:45 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/12 09:23:17 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap("Ulugbek");
	ClapTrap	trap(clap);
	
	std::cout << trap.getStrValue() << std::endl;
	for(int i = 0; i < 4; i++)
	{
		clap.attack("Enemy");
	}
	clap.beRepaired(4);
	clap.takeDamage(6);
	clap.takeDamage(6);
	clap.takeDamage(6);
	clap.takeDamage(6);
	
}