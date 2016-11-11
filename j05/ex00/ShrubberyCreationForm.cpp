#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:Form("Shrubbery Creation", 145, 137),
	_target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	:Form("Shrubbery Creation", 145, 137)
{
	if(this != &src)
		*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	this->_target = src.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}


void ShrubberyCreationForm::beExecute(Bureaucrate *bureaucrate) const
{
	if (this->getIsSigned()) {
		if (bureaucrate->getGrade() <= this->getExecGrade()) {
			Form::beExecute(bureaucrate);
			std::cout << "Write an ascii tree at " << _target << ".\n";
		}
	}
	else 
		throw NotSignException();
}


std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &shrubbery)
{
	std::string status;
	if (shrubbery.getIsSigned())
		status = " signed";
	else
		status = " not signed";

	o 	<< "Form" << shrubbery.getName() << status
		<< ", grade " << shrubbery.getSignGrade() << " required to sign"
		<< ", grade " << shrubbery.getExecGrade() << " required to execute.\n";
		
	return o;
}