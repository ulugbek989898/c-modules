/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 08:37:59 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 09:16:20 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &otherObject);
	FragTrap &operator=(FragTrap const &otherObject);

	void	attack(const std::string &target);
	void	highFivesGuys();
};

std::ostream &operator << (std::ostream &out, const FragTrap &fragTrap);

#endif