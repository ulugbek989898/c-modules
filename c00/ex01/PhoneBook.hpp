/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 22:36:25 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/30 15:28:08 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
private:
	static const int	limit = 8;
	int					lenOfContacts;
	Contact				contacts[limit];
	int					read_input() const;

public:
	void	addContact();
	void	printContacts() const;
	void	searchContacts() const;
	PhoneBook();
	~PhoneBook();
};

#endif