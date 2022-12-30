#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Contact::Contact()
{
}

Contact::~Contact()
{
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

std::string	checkTextLen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::getContact() const
{
	if (f_name.empty() || l_name.empty() || nick_name.empty())
		return ;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << index;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(f_name);
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(l_name);
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(nick_name);
	std::cout << "|"  << std::endl;
}

void	Contact::setIndex(int i)
{
	index = i;
}