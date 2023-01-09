/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:56:48 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/02 17:42:16 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// int	main()
// {
// 	int	numOfBalls = 42;
// 	int	*ballsPtr = &numOfBalls;
// 	int	&ballsRef = numOfBalls;

// 	std::cout << numOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
// 	*ballsPtr = 21;
// 	std::cout << numOfBalls << std::endl;
// 	ballsRef = 84;
// 	std::cout << numOfBalls << std::endl;
// }

// void	byPtr(std::string *str)
// {
// 	*str = *str + " and ponies";
// }

// void	byConstPtr(std::string const *str)
// {
// 	std::cout << *str << std::endl;
// }

// void	byRef(std::string &str)
// {
// 	str = str + " and ponies";
// }

// void	byConstRef(std::string const &str)
// {
// 	std::cout << str << std::endl;
// }

// int	main()
// {
// 	std::string	str = "i like butterflies";
// 	std::cout << str << std::endl;

// 	byPtr(&str);
// 	byConstPtr(&str);

// 	str = "i like otters";
// 	std::cout << str << std::endl;
// 	byRef(str);
// 	byConstRef(str);
// }

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string variable = " << &str << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;

	std::cout << "The value of the string variable = " << str << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
}