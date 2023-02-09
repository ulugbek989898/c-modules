/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 08:42:56 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 09:30:52 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor from derived class FragTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	std::cout << "default parametirized constructor from derived class FragTrap" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called from derived class FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &otherObject)
{
	this->name = otherObject.name;
	this->hitPoints = otherObject.hitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->attackDamage = otherObject.attackDamage;
	std::cout << "copy constructor called from derived Class FragTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &otherObject)
{
	this->name = otherObject.name;
	this->hitPoints = otherObject.hitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->attackDamage = otherObject.attackDamage;
	std::cout << "copy assign constructor called from derived Class FragTrap" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap: Can i hit you??" << std::endl;
	if (hitPoints == 0)
	{
		std::cout << name << " died... can't attack" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << name << "'s energyPoints is 0... can't attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << name << " attacks " \
		<< target << ", causing " << attackDamage \
		<< " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (hitPoints == 0)
	{
		std::cout << name << " died... can't highFives" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << name << "'s energyPoints is 0... can't highFives" << std::endl;
		return ;
	}
	std::cout << name << " high fives!" << std::endl;
	energyPoints--;
}

std::ostream	&operator << (std::ostream &out, const FragTrap &fragTrap)
{
	out << "FragTrap name: " << fragTrap.getStrValue() << ", hit points: "\
	<< fragTrap.getHitPoints() << ", energy points: " << fragTrap.getEnergyPoints()\
	<< ", attack damage: " << fragTrap.getAttackDamage() << std::endl;
	return (out);
}