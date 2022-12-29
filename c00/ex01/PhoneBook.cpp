/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:11:32 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/29 22:48:31 by uisroilo         ###   ########.fr       */
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

void	Contact::setContact()
{
	std::cout << "Please enter your first name: ";
	std::cin >> f_name;
	std::cout << "Please enter your last name: ";
	std::cin >> l_name;
	std::cout << "Please enter your nick name: ";
	std::cin >> nick_name;
	std::cout << "Please enter your phone number: ";
	std::cin >> phone_num;
	std::cout << "Please enter your darkest secret: ";
	std::cin >> darkest_sec;
}

void	Contact::getContact() const
{
	std::cout << "Your name is " << f_name;
	std::cout << ", Your last name is " << l_name;
	std::cout << ", Your nick name is " << nick_name;
	std::cout << ", Your phone number is " << phone_num;
	std::cout << ", Your darkest secret is " << darkest_sec;
}

void	PhoneBook::addContact()
{
	contacts[0].setContact();
	contacts[0].getContact();
}

int	main()
{
	PhoneBook	book;
	std::string	choice;

	showSelection();
	std::cout<<"Enter your choice."<<std::endl;
	std::cout<<">";
	std::cin >> choice;
	std::cout << "Your choice is " << choice << std::endl;

	if (choice.compare("ADD") == 0)
		book.addContact();


}