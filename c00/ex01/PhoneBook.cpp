/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:11:32 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/30 15:20:40 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}
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
	contacts[i % limit].setContact();
	contacts[i % limit].setIndex(i % limit);
	i++;
	lenOfContacts = i;
}

void	PhoneBook::printContacts() const
{
	int	i;

	i = 0;
	std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Name";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Last name";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Nick name";
	std::cout << "|"  << std::endl;
	while (i < limit)
	{
		contacts[i].getContact();
		i++;
	}
}

int	PhoneBook::read_input() const
{
	int		input = -1;
	bool	valid = false;

	do
	{
		std::cout << "Please enter the contact index: ";
		std::cin >> input;
		if (input > 0 && input <= 8 && input <= lenOfContacts)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			valid = true;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid index; please re-enter." << std::endl;		
		}
	}
	while (!valid);
	return (input);
}

void	PhoneBook::searchContacts() const
{
	int	ret_index = read_input();
	contacts[ret_index - 1].display(ret_index);
}

int	main()
{
	PhoneBook	book;
	std::string	choice;

	ft_make_fancy_line("📞 Welcome to Your Awesome PhoneBook 📖 ", 5, '#');
	while (1)
	{
		showSelection();
		std::cout<<"Enter your choice..."<<std::endl;
		std::cout<<">";
		std::getline(std::cin, choice);
		if (std::cin.eof())
			break;
		std::cout << "Your choice is " << choice << std::endl;

		if (choice.compare("ADD") == 0)
			book.addContact();
		else if (choice.compare("SEARCH") == 0)
		{
			book.printContacts();
			book.searchContacts();
		}
		else if (choice.compare("EXIT") == 0)
			break;
		else
			std::cout << "You entered wrong choice try again!" << std::endl;
	}

}