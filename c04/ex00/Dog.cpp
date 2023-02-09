/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:55:36 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 12:07:14 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Constructor called from derived class Dog" << std::endl;
}

Dog::Dog(Dog const &otherObject)
{
	std::cout << "Copy assign constructor called from Dog class" << std::endl;
	type = otherObject.type;
}

Dog::~Dog()
{
	std::cout << "Destructor called from derived class Dog" << std::endl;
}

Dog	&Dog::operator=(const Dog &otherObject)
{
	std::cout << "Copy assign constructor called from derived class Dog" << std::endl;
	if (this != &otherObject)
		type = otherObject.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof" << std::endl;
}
