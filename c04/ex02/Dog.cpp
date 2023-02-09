/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:55:36 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 12:33:46 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor called from derived class Dog" << std::endl;
	type = "Dog";
	brain = new Brain[5];
	for(int i = 0; i < 5; i++)
		brain[i].setIdeas("Ideaaaa", 20);
}


Dog::Dog(Dog const &otherObject)
{
	std::cout << "Copy assign constructor called from Dog class" << std::endl;
	type = otherObject.type;
	brain = new Brain[5];
	for(int i = 0; i < 5; i++)
		brain[i] = otherObject.brain[i];
}

Dog::~Dog()
{
	std::cout << "Destructor called from derived class Dog" << std::endl;
	delete [] brain;
}

Dog	&Dog::operator=(const Dog &otherObject)
{
	std::cout << "Copy assign constructor called from derived class Dog" << std::endl;
	if (this != &otherObject)
	{
		type = otherObject.type;
		delete [] brain;
		brain = new Brain[5];
		for(int i = 0; i < 5; i++)
			brain[i] = otherObject.brain[i];
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof" << std::endl;
}

void	Dog::setBrain(std::string str, int num)
{
	for(int i = 0; i < 5; i++)
		brain[i].setIdeas(str, num);
}

Brain	*Dog::getBrain(void) const 
{
	return brain;
}