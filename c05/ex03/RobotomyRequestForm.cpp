/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:53:27 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/10 12:10:45 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	AForm("Robotomy request form", 72, 45), _target(target) {};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	AForm(other), _target(other._target) {};

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
	( void )other;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getBeSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else {
		static	int i;
		if (i % 2 == 0)
			std::cout << _target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
		i++;
	}
}