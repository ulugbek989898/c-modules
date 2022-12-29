/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:53:49 by ael-khni          #+#    #+#             */
/*   Updated: 2022/12/29 19:07:56 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << static_cast<char> (toupper(av[i][j]));
				j++;
			}
			i++;
			if (av[i] != NULL)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
