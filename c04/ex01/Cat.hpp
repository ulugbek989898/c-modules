/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:43:48 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 18:30:42 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(Brain brain);
	~Cat();
	Cat(Cat const &otherObject);
	Cat &operator=(const Cat &otherObject);
	void	makeSound() const;
	void	setBrain(std::string str, int num);
	Brain	&getBrain() const;
};

#endif