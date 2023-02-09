/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:42 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 13:03:21 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(std::string str);
	WrongAnimal(WrongAnimal const &otherObject);
	WrongAnimal &operator=(const WrongAnimal &otherObject);
	virtual	~WrongAnimal();
	std::string		getType() const;
	virtual	void	makeSound() const;
};

#endif