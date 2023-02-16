/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:30:31 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/13 17:13:43 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():c_name(""), c_grade(15){
	// std::cout << "Default constructor called,  name set as NULL "\
	// << c_name << "grade = " << c_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): c_name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	c_grade = grade;
	// std::cout << "Parametirezed constructor called from Bureaucrat"<< std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Grade too high!!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low!!";
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Destructor called" << std::endl;
}

const	std::string	Bureaucrat::getName(void) const {
	return c_name;
}

int	Bureaucrat::getGrade(void) const {
	return c_grade;
}

void	Bureaucrat::increment(void) {
	if (c_grade - 1 < 1)
		throw GradeTooHighException();
	c_grade -= 1;
}

void	Bureaucrat::decrement(void) {
	if (c_grade + 1 > 150)
		throw GradeTooLowException();
	c_grade += 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat &otherObj) : c_name(otherObj.c_name) {
	c_grade = otherObj.c_grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &otherObj) {
	if (this != &otherObj)
		c_grade = otherObj.c_grade;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << "bureaucrat name " << bureaucrat.getName() << " and grade is " << bureaucrat.getGrade() << std::endl;
	return out;
}

void	Bureaucrat::signForm(AForm &form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->getName() << " couldn’t executed " << form.getName() << " because " << e.what() << std::endl;
	}
} 