/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:22:02 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/09 15:23:08 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): c_name(""), c_signed(false), c_grade_to_sign(10), c_grade_to_execute(20) {
	std::cout << "Default constructor called from AForm class" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : c_name(name), c_grade_to_sign(gradeToSign), c_grade_to_execute(gradeToExecute) {
	c_signed = false;
	std::cout << "Parametirized AForm class constructor called" << std::endl;
	if (c_grade_to_sign > 150 || c_grade_to_execute > 150)
		throw GradeTooLowException();
	else if (c_grade_to_sign < 1 || c_grade_to_execute < 1)
		throw GradeTooHighException();
}

AForm::~AForm(){
	std::cout << "Destructor called from AForm" << std::endl;
}

std::string	AForm::getName(void) const {
	return c_name;
}

bool	AForm::getBeSigned(void) const {
	return c_signed;
}

int		AForm::getGradeToSign(void) const {
	return c_grade_to_sign;
}

int		AForm::getGradeToExecute(void) const {
	return c_grade_to_execute;
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
	out << "AForm name " << form.getName() << ", isSigned " << form.getBeSigned();
	out << ", Grade to sign = " << form.getGradeToSign() << ", Grade to execute = " << form.getGradeToExecute() << std::endl;
	return out;
}

AForm::AForm(const AForm &other) : 
	c_name(other.getName()),
	c_signed(other.getBeSigned()),
	c_grade_to_sign(other.getGradeToSign()),
	c_grade_to_execute(other.getGradeToExecute())
	{};

AForm &AForm::operator=(const AForm &other) {
	if (this != &other)
		c_signed = other.getBeSigned();
	return *this;
}

void	AForm::beSigned(Bureaucrat bureaucrat) {
	if (!(bureaucrat.getGrade() > c_grade_to_sign))
		c_signed = true;
	else
		throw GradeTooLowException();
}
