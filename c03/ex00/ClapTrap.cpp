/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 07:38:13 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/12 09:55:19 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	name = "";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "with parametr constructor called" << std::endl;
	name = str;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &otherObject)
{
	this->name = otherObject.name;
	std::cout << "Copy constructor called" << std::endl;
}
//Constructors finished


//Accessors
std::string	ClapTrap::getStrValue() const
{
	return (this->name);
}

int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}
//Accessors finished

//assign operator overloading

ClapTrap	&ClapTrap::operator= (ClapTrap const &otherObject)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = otherObject.name;
	return *this;
}
//assign operator overloading finished

//Deconstructor
ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}
//Deconstructor finished

void	ClapTrap::attack(const std::string &target)
{
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
	std::cout << "ClapTrap " << name\
	 << " attacks " << target << ", causing " \
	 << getAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << name <<" died. Can not repair!" << std::endl;
		return ;
	}
	else if (energyPoints == 0)
	{
		std::cout << name << "\'s energyPoints is 0. Can\'t repair!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << name << " be repaired " << amount << ", from "\
	 << hitPoints <<" hit points to ";
	hitPoints = hitPoints + amount;
	std::cout << hitPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << name << " already dead!" << std::endl;
		return ;
	}
	std::cout << name << " takeDamage " << amount << ", from "\
	 << getHitPoints() << " hit points to ";
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << hitPoints << std::endl;
	if (hitPoints == 0)
		std::cout << name << " died..." << std::endl;
}
