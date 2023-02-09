#include "Form.hpp"

Form::Form(): c_name(""), c_signed(false), c_grade_to_sign(10), c_grade_to_execute(20) {
	std::cout << "Default constructor called from Form class" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : c_name(name), c_grade_to_sign(gradeToSign), c_grade_to_execute(gradeToExecute) {
	c_signed = false;
	std::cout << "Parametirized Form class constructor called" << std::endl;
	if (c_grade_to_sign > 150 || c_grade_to_execute > 150)
		throw GradeTooLowException();
	else if (c_grade_to_sign < 1 || c_grade_to_execute < 1)
		throw GradeTooHighException();
}

Form::~Form(){
	std::cout << "Destructor called from Form" << std::endl;
}

std::string	Form::getName(void) const {
	return c_name;
}

bool	Form::getBeSigned(void) const {
	return c_signed;
}

int		Form::getGradeToSign(void) const {
	return c_grade_to_sign;
}

int		Form::getGradeToExecute(void) const {
	return c_grade_to_execute;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form name " << form.getName() << ", isSigned " << form.getBeSigned();
	out << ", Grade to sign = " << form.getGradeToSign() << ", Grade to execute = " << form.getGradeToExecute() << std::endl;
	return out;
}

Form::Form(const Form &other) : 
	c_name(other.getName()),
	c_signed(other.getBeSigned()),
	c_grade_to_sign(other.getGradeToSign()),
	c_grade_to_execute(other.getGradeToExecute())
	{};

Form &Form::operator=(const Form &other) {
	if (this != &other)
		c_signed = other.getBeSigned();
	return *this;
}

void	Form::beSigned(Bureaucrat bureaucrat) {
	if (!(bureaucrat.getGrade() > c_grade_to_sign))
		c_signed = true;
	else
		throw GradeTooLowException();
}
