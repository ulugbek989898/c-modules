/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:35 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/13 16:28:17 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern	someRandomIntern;
	AForm*	rrf;

	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "home");
	delete rrf;
	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "home2");
	delete rrf;
}