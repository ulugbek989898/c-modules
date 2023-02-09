/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:30:43 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 08:44:58 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	// name = ""; because ClapTrap constructor will do it
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Default constructor called from derived Class" << std::endl;
}

ScavTrap::ScavTrap(std::string str):ClapTrap(str)
{
	// name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Default parametirized constructor called from derived Class" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor called from derived Class" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &otherObject)
{
	this->name = otherObject.name;
	this->hitPoints = otherObject.hitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->attackDamage = otherObject.attackDamage;
	std::cout << "copy constructor called from derived Class" << std::endl;
}

ScavTrap	&ScavTrap::operator= (ScavTrap const &otherObject)
{
	std::cout << "copy assignment operator called from derived Class" << std::endl;
	this->name = otherObject.name;
	this->hitPoints = otherObject.hitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->attackDamage = otherObject.attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "Can i hit you ?" << std::endl;
	if (hitPoints == 0)
	{
		std::cout << name <<" died. Can not attack!" << std::endl;
		return ;
	}
	else if (energyPoints == 0)
	{
		std::cout << name << "\'s energyPoints is 0. Can\'t attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name\
	 << " attacks " << target << ", causing " \
	 << getAttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (hitPoints == 0)
	{
		std::cout << name << " died... can't guardGate" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << name << "'s energyPoints is 0... can't guardGate" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
	energyPoints--;
}