/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:31:50 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/03 11:39:33 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typeStr): type(typeStr){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string typeStr)
{
	type = typeStr;
}

const std::string	&Weapon::getType() const
{
	return (type);
}