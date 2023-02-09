/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:29:07 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 08:39:10 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &otherObject);
	ScavTrap &operator=(ScavTrap const &otherObject);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif