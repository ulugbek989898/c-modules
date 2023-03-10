/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 22:35:51 by uisroilo          #+#    #+#             */
/*   Updated: 2022/12/30 14:36:03 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string	f_name;
	std::string	l_name;
	std::string	nick_name;
	std::string	phone_num;
	std::string	darkest_sec;
	int			index;
public:
	void	setContact();
	void	setIndex(int i);
	void	getContact() const;
	void	display(int index) const;
	Contact();
	~Contact();
};

#endif