/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:36:10 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/30 15:25:29 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::setContact()
{
	std::cout << "Please enter your first name: ";
	std::getline(std::cin, f_name);
	std::cout << "Please enter your last name: ";
	std::getline(std::cin, l_name);
	std::cout << "Please enter your nick name: ";
	std::getline(std::cin, nick_name);
	std::cout << "Please enter your phone number: ";
	std::getline(std::cin, phone_num);
	std::cout << "Please enter your darkest secret: ";
	std::getline(std::cin, darkest_sec);
	std::cout<< std::endl;
	if (f_name.empty() || l_name.empty() || nick_name.empty())
	{
		std::cout << "Contact creation failed..." << std::endl;
		return ;
	}
	std::cout << "You successfully created contact. Congrats 🤩 🥳🥳 🤩" << std::endl;
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
	std::cout << "|" << std::setfill(' ') << std::setw(10) << index + 1;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(f_name);
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(l_name);
	std::cout << "|" << std::setfill(' ') << std::setw(10) << checkTextLen(nick_name);
	std::cout << "|"  << std::endl;
}

void	Contact::setIndex(int i)
{
	index = i;
}

void	Contact::display(int index) const {
	if (f_name.empty() || l_name.empty() || nick_name.empty())
		return ;
	std::cout << std::endl;
	std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
	std::cout << "First Name:\t" << f_name << std::endl;
	std::cout << "Last Name:\t" << l_name << std::endl;
	std::cout << "Nickname:\t" << nick_name << std::endl;
	std::cout << "Phone number:\t" << phone_num << std::endl;
	std::cout << "Darkest secret:\t" << darkest_sec << std::endl;
	std::cout << std::endl;
}