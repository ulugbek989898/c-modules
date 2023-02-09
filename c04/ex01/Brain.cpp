/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:16:51 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 07:38:44 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor called from Brain class" << std::endl;
}

Brain::~Brain()
{
	std::cout << "decontructor called from Brain class" << std::endl;
}

Brain::Brain(const Brain &otherObject)
{
	std::cout << "Copy constructor called Brain class" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = otherObject.ideas[i];
}

Brain	&Brain::operator=(const Brain &otherObject)
{
	std::cout << "Copy assign constructor called Brain class" << std::endl;
	if (this != &otherObject)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = otherObject.ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(std::string str, int num)
{
	int	i;
	std::stringstream	intToString;
	if (num > 100)
		num = 100;
	for(i = 0; i < num; i++)
	{
		intToString << i;
		ideas[i] = (str + intToString.str());
		intToString.str("");
	}
}

void	Brain::printIdeas(int num) const
{
	for(int i = 0; i < num; i++)
		std::cout << ideas[i] << std::endl;
}