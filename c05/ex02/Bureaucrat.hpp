/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:28:37 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/13 17:13:09 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	c_name;
	int					c_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what(void) const throw();
	};

	const	std::string	getName(void) const;
	int					getGrade(void) const;
	void				increment(void);
	void				decrement(void);
	void				signForm(AForm &form);
	void				executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
