/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:33:25 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/11 17:36:53 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(Intern const &other);
	Intern &operator=(Intern const &other);

	class UnknownFormException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	AForm	*makeForm(const std::string &name, const std::string &target);
};

#endif