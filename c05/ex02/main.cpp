/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:35 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/11 16:21:59 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try {
		std::cout << "--- Test ShrubberyCreationForm ---" << std::endl;
		std::cout << std::endl;
		Bureaucrat b1("b1", 11);
		ShrubberyCreationForm shrubbery("B02");
		std::cout << shrubbery << std::endl;
		b1.signForm(shrubbery);
		b1.executeForm(shrubbery);
		std::cout << std::endl;
		std::cout << "--- Test ShrubberyCreationForm Finish ---" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << "--- 1Test ShrubberyCreationForm Finish ---" << std::endl;
	}
	// try {
	// 	std::cout << "--- Test ShrubberyCreationForm ---" << std::endl;
	// 	std::cout << std::endl;
	// 	Bureaucrat b1("b1", 149);
	// 	ShrubberyCreationForm shrubbery("B02");
	// 	std::cout << shrubbery << std::endl;
	// 	b1.signForm(shrubbery);
	// 	b1.executeForm(shrubbery);
	// 	std::cout << std::endl;
	// 	std::cout << "--- Test ShrubberyCreationForm Finish ---" << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << "--- 1Test ShrubberyCreationForm Finish ---" << std::endl;
	// }
	// try {
	// 	std::cout << "--- Test RobotomyRequestForm ---" << std::endl;
	// 	std::cout << std::endl;
	// 	Bureaucrat b1("b1", 50);
	// 	RobotomyRequestForm robo("Robotomy");
	// 	std::cout << robo << std::endl;
	// 	b1.signForm(robo);
	// 	b1.executeForm(robo);
	// 	b1.executeForm(robo);
	// 	b1.executeForm(robo);
	// 	std::cout << std::endl;
	// 	std::cout << "--- Test RobotomyRequestForm Finish ---" << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << "--- 1Test RobotomyRequestForm Finish ---" << std::endl;
	// }
	// try {
	// 	std::cout << "--- Test PresidentialPardonForm ---" << std::endl;
	// 	std::cout << std::endl;
	// 	Bureaucrat b1("b1", 2);
	// 	PresidentialPardonForm pres("presidential");
	// 	std::cout << pres << std::endl;
	// 	// b1.signForm(pres);
	// 	b1.executeForm(pres);
	// 	std::cout << std::endl;
	// 	std::cout << "--- Test PresidentialPardonForm Finish ---" << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << "--- 1Test PresidentialPardonForm Finish ---" << std::endl;
	// }
}