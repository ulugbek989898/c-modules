/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:51:10 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 12:06:59 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Constructor called from derived class Cat" << std::endl;
}

Cat::Cat(Cat const &otherObject)
{
	std::cout << "Copy constructor called form Cat Class" << std::endl;
	type = otherObject.type;
}

Cat	&Cat::operator=(const Cat &otherObject)
{
	std::cout << "Copy assign constructor called from Cat Class" << std::endl;
	if (this != &otherObject)
		type = otherObject.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called from derived class Cat" << std::endl;
}


void	Cat::makeSound() const
{
	std::cout << "Meow meow meow" << std::endl;
}