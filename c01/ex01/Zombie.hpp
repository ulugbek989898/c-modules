/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:46:22 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 15:18:06 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	void	setName(std::string name);
	void	announce(void) const;
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

const	static	int	limit = 8;
Zombie*	zombieHorde (int N, std::string name);

#endif