/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:39:40 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 08:00:13 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor called from base class Animal" << std::endl;
	type = "";
}

Animal::Animal(std::string str)
{
	type = str;
	std::cout << "Paremetirized constructor called from base class Animal" << std::endl;
}

Animal::Animal(Animal const &otherObject)
{
	std::cout << "Copy constructor called from base class Animal" << std::endl;
	type = otherObject.type;
}

Animal	&Animal::operator=(const Animal &otherObject)
{
	std::cout << "Copy assign constructor called from base class Animal" << std::endl;
	if (this != &otherObject)
		type = otherObject.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor called base class Animal" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Random sounds" << std::endl;
}