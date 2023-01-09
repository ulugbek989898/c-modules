/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:05:58 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/01 14:34:35 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
// class constructor without parameter
	// Zombie *createZomb;
	// createZomb = new Zombie;
	// (*createZomb).setName(name);
// class constructor with parameter
	Zombie	*createZomb;
	createZomb = new Zombie(name);
	return (createZomb);
}