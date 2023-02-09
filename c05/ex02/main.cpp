/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:35 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/09 14:32:24 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	try {
		Form obj1;
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// try {
	// 	Form obj1("B2", 11, -11);
	// 	std::cout << obj1;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	Form obj1("A520", 11, 11);
	// 	Form obj2(obj1);
	// 	std::cout << obj2;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// try {
	// 	Bureaucrat obj1("enemy2", 20);
	// 	std::cout <<obj1;
	// 	Form	obj2("W2", 30, 40);
	// 	std::cout << obj2;
	// 	obj2.beSigned(obj1);
	// 	std::cout << obj2;
	// 	obj1.signForm(obj2);
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat obj1("enemy2", 20);
	// 	std::cout <<obj1;
	// 	Form	obj2("W2", 10, 40);
	// 	std::cout << obj2;
	// 	obj1.signForm(obj2);
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
}