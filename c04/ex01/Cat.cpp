/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:51:10 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 12:33:31 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor called from derived class Cat" << std::endl;
	type = "Cat";
	brain = new Brain;
	brain->setIdeas("New cat idea", 20);
}

Cat::Cat(Brain brain)
{
	std::cout << "Cat brain constructor called" << std::endl;
	type = "Cat";
	this->brain = new Brain(brain);
}

Cat::Cat(Cat const &otherObject)
{
	std::cout << "Copy constructor called form Cat Class" << std::endl;
	type = otherObject.type;
	brain = new Brain(*otherObject.brain);
}

Cat	&Cat::operator=(const Cat &otherObject)
{
	std::cout << "Copy assign constructor called from Cat Class" << std::endl;
	if (this != &otherObject)
	{
		type = otherObject.type;
		brain = new Brain(*otherObject.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called from derived class Cat" << std::endl;
	delete brain;
}


void	Cat::makeSound() const
{
	std::cout << "Meow meow meow" << std::endl;
}

void	Cat::setBrain(std::string str, int num)
{
	brain->setIdeas(str, num);
}

Brain	&Cat::getBrain(void) const {
	return *brain;
}
