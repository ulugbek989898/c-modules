/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:00:15 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/17 13:07:32 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	// Brain	var1;
	// Brain	var2[5];

	// var1.setIdeas("good idea", 20);
	// for(int i = 0; i < 5; i++)
	// 	var2[i].setIdeas("next good idea", 20);
	// var1.printIdeas(20);
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout <<std::endl;
	// 	std::cout << "Brain" << i << std::endl;
	// 	var2[i].printIdeas(20);
	// }

	Animal	*animals[4];

	for(int i = 0; i < 4; i++) {
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	for(int i = 0; i < 4; i++)
		animals[i]->makeSound();
	std::cout << std::endl;
	

	for(int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << std::endl;

	// Cat	basic;
	// {
	// 	Cat tmp = basic;
	// 	tmp.getBrain().printIdeas(5);
	// 	tmp.setBrain("next idea", 5);
	// 	std::cout << "after setting new idea" << std::endl;
	// 	tmp.getBrain().printIdeas(5);
	// }
	// basic.getBrain().printIdeas(5);

	//Cat is creating only 1 Brain object, 
	// Cat catt;
	// Cat	catt1(catt);
	// catt.getBrain().printIdeas(20);
	// std::cout << std::endl;
	// catt1.getBrain().printIdeas(20);
	// catt1.setBrain("changed idea", 20);
	// std::cout << std::endl;
	// catt.getBrain().printIdeas(20);
	// std::cout << std::endl;
	// catt1.getBrain().printIdeas(20);

	// Dog	dogggg;
	// Brain	*brainnn = dogggg.getBrain();
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout << "Brain" << i << std::endl;
	// 	brainnn[i].printIdeas(20);
	// }
	// dogggg.setBrain("new one idea", 20);
	// std::cout << "zRresult" << std::endl;
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout << "Brain" << i << std::endl;
	// 	brainnn[i].printIdeas(20);
	// }

	// Dog	dogg2(dogggg);
	// Brain	*bran = dogg2.getBrain();
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout << "Dogg2 Brain" << i << std::endl;
	// 	bran[i].printIdeas(20);
	// }
	// dogg2.setBrain("changed idea", 20);
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout << "Dogg2 Brain after changing" << i << std::endl;
	// 	bran[i].printIdeas(20);
	// }
	// for(int i = 0; i < 5; i++)
	// {
	// 	std::cout << "Brain" << i << std::endl;
	// 	brainnn[i].printIdeas(20);
	// }
	return 0;
}