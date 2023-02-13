/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:36:00 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/11 17:20:07 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &other){
	*this = other;
}

Intern	&Intern::operator=(const Intern& other) {
	( void ) other;
	return (*this);
}

const char *Intern::UnknownFormException::what(void) const throw() {
    return "Unknown Form!!";
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) {
	std::string formNames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			switch (i)
			{
			case 0:
				std::cout << "Intern creates ShruberryCreationForm" << std::endl;
				return new ShrubberyCreationForm(target);
			case 1:
				std::cout << "Intern creates RobotomyRequestForm" << std::endl;
				return new RobotomyRequestForm(target);
			case 2:
				std::cout << "Intern creates PresidentialPardonForm" << std::endl;
				return new PresidentialPardonForm(target);
			default:
				break;
			}
		}
	}
	throw UnknownFormException();
	return (NULL);
}