/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:45:44 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 15:32:38 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*hordie;
	hordie = zombieHorde(limit, "Ulugbek");

	int i = 0;
	while(i < limit)
	{
		hordie[i].announce();
		i++;
	}
	delete []hordie;
}