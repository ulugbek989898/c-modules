/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:54:28 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 09:38:13 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	~Dog();
	Dog(Dog const &otherObject);
	Dog &operator=(const Dog &otherObject);
	void	makeSound() const;
	void	setBrain(std::string str, int num);
	Brain	*getBrain() const;
};

#endif