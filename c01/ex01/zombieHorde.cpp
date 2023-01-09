/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:18:39 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 15:36:11 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde (int N, std::string name)
{
	Zombie	*createHorde;
	createHorde = new Zombie[N];
	int	i = 0;
	std::stringstream	intToString;
	while(i < N)
	{
		intToString << i;
		createHorde[i].setName(name + intToString.str());
		intToString.str("");
		i++;
	}
	return (createHorde);
}