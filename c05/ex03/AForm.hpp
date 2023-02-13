/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:43:44 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/11 17:38:20 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include "Bureaucrat.hpp"
#include <fstream>


class Bureaucrat;

class AForm {
private:
	const	std::string	c_name;
	bool				c_signed;
	const	int			c_grade_to_sign;
	const	int			c_grade_to_execute;
public:
	AForm();
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	virtual ~AForm();
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	void			beSigned(Bureaucrat bureaucrat);
	std::string		getName(void) const;
	bool			getBeSigned(void) const;
	int				getGradeToSign(void) const;
	int				getGradeToExecute(void) const;
	virtual void	execute(Bureaucrat const &executor) const = 0;
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
	class NotSignedException : public std::exception {
	public:
		const char *what(void) const throw() {
			return "Form was not signed";
		};
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif