/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:35 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/06 14:16:51 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat obj1;
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat obj1("enemy1", 11);
		std::cout << obj1;
		obj1.increment(5);
		std::cout << "after incrementing  ";
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat obj1("enemy2", 100);
		std::cout <<obj1;
		obj1.decrement(55);
		std::cout << "after decrementing  ";
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat obj1("enemy3", 40);
		Bureaucrat obj2(obj1);
		std::cout <<obj2;
		obj2.decrement(55);
		std::cout << "after decrementing ";
		std::cout << obj2;
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat obj1("enemy4", 40);
		Bureaucrat obj2 = obj1;
		std::cout <<obj2;
		obj2.increment(55);
		std::cout << "after decrementing ";
		std::cout << obj2;
		std::cout << obj1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}