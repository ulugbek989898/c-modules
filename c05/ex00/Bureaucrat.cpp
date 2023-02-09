/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:30:31 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/06 14:13:53 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():c_name(""), c_grade(15){
	std::cout << "Default constructor called,  name set as NULL "\
	<< c_name << "grade = " << c_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): c_name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	c_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Grade too high!!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low!!";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

const	std::string	Bureaucrat::getName(void) const {
	return c_name;
}

int	Bureaucrat::getGrade(void) const {
	return c_grade;
}

void	Bureaucrat::increment(int amount) {
	if (c_grade - amount < 1)
		throw Bureaucrat::GradeTooHighException();
	c_grade -= amount;
}

void	Bureaucrat::decrement(int amount) {
	if (c_grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	c_grade += amount;
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