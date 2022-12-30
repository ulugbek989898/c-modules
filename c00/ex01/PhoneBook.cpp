/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:11:32 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/30 02:06:22 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

void	ft_make_fancy_line(std::string str, int num, char symbol)
{
	std::cout<< std::endl;
	std::cout<<std::setfill(symbol) << std::setw(str.length() + num);
	std::cout<<str;
	std::cout<<std::setfill(symbol) << std::setw(num);
	std::cout<< "" << std::endl;
}

void	showSelection()
{
	ft_make_fancy_line("📞 Welcome to Your Awesome PhoneBook 📖 ", 5, '#');
	ft_make_fancy_line("USAGE", 10, '*');
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quite the PhoneBook.";
	ft_make_fancy_line("", 13, '*');
	std::cout<< std::endl;
}


void	PhoneBook::addContact()
{
	static	int	i;
	contacts[i % 8].setContact();
	contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::printContacts() const
{
	int	i;

	i = 0;
	std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
	while (i < 8)
	{
		contacts[i].getContact();
		i++;
	}
}

int	main()
{
	PhoneBook	book;
	std::string	choice;

	showSelection();
	while (1)
	{
		std::cout<<"Enter your choice."<<std::endl;
		std::cout<<">";
		std::cin >> choice;
		std::cout << "Your choice is " << choice << std::endl;

		if (choice.compare("ADD") == 0)
			book.addContact();
		else if (choice.compare("SEARCH") == 0)
			book.printContacts();
		else if (choice.compare("EXIT") == 0)
			break;
		else
			std::cout << "You entered wrong choice try again!" << std::endl;
	}

}