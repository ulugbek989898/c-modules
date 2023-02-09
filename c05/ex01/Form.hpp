/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:43:44 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/09 15:00:12 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const	std::string	c_name;
	bool				c_signed;
	const	int			c_grade_to_sign;
	const	int			c_grade_to_execute;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
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
			return "Form grade too high.";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif