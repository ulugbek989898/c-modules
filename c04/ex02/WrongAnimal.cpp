/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:03:25 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 13:04:45 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor called from base class WrongAnimal" << std::endl;
	type = "";
}

WrongAnimal::WrongAnimal(std::string str)
{
	type = str;
	std::cout << "Paremetirized constructor called from base class WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &otherObject)
{
	std::cout << "Copy constructor called from base class WrongAnimal" << std::endl;
	type = otherObject.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &otherObject)
{
	std::cout << "Copy assign constructor called from base class WrongAnimal" << std::endl;
	if (this != &otherObject)
		type = otherObject.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called base class WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random sounds from Wrong Animal" << std::endl;
}