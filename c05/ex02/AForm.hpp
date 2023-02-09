/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:43:44 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/09 15:23:59 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const	std::string	c_name;
	bool				c_signed;
	const	int			c_grade_to_sign;
	const	int			c_grade_to_execute;
public:
	AForm();
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	~AForm();
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	void		beSigned(Bureaucrat bureaucrat);
	std::string	getName(void) const;
	bool		getBeSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Form grade too low.";
		}
	};
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "AForm grade too high.";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif