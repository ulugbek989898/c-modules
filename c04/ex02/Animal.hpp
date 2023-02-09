/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:34:53 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 13:37:34 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string str);
	Animal(Animal const &otherObject);
	Animal &operator=(const Animal &otherObject);
	virtual	~Animal();
	std::string		getType() const;
	virtual	void	makeSound() const = 0;
};

#endif