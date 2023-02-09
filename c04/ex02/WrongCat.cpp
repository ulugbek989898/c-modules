/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:06:49 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 13:08:01 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "Constructor called from derived class WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &otherObject)
{
	std::cout << "Copy constructor called form WrongCat Class" << std::endl;
	type = otherObject.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &otherObject)
{
	std::cout << "Copy assign constructor called from WrongCat Class" << std::endl;
	if (this != &otherObject)
		type = otherObject.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called from derived class WrongCat" << std::endl;
}


void	WrongCat::makeSound() const
{
	std::cout << "Meow meow meow from WrongCat" << std::endl;
}