/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:55:06 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/16 18:40:20 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[]) {
	(void)argv;
	if (argc != 2)
	{
		std::cout << "wrong parameter number, usage: ./ex00 number/printable_char" << std::endl;
		return (1);
	}
	ScalarConverter	obj1;
	
	try
	{
		obj1.setStr(argv[1]);
		obj1.convert();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}