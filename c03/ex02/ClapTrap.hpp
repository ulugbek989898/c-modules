/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 07:33:20 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/14 09:12:36 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &otherObject);
	ClapTrap &operator=(ClapTrap const &otherObject);
	std::string	getStrValue() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
	void		attack(const std::string& target);
	void		beRepaired(unsigned int amount);
	 void		takeDamage(unsigned int amount);
	// void		setHitPoints(int n);
	// void		setEnergyPoints(int n);
	// void		setAttackDamage(int n);
};

#endif