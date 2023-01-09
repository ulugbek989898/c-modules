/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:49:30 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 14:52:30 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	name = "";
}

Zombie::Zombie(std::string str){
	setName(str);
}

Zombie::~Zombie() {
	std::cout << name << ": Bye......" << std::endl;
}

void	Zombie::setName(std::string str)
{
	name = str;
}

void	Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}