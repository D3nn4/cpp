#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:Form("Presidential Pardon", 25, 5),
	_target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	:Form("Presidential Pardon", 25, 5)
{
	if(this != &src)
		*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	this->_target = src.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}


void PresidentialPardonForm::beExecute(Bureaucrate *bureaucrate) const
{
	if (this->getIsSigned()) {
		if (bureaucrate->getGrade() <= this->getExecGrade()) {
			Form::beExecute(bureaucrate);
			std::cout << "Robotomized " << _target << " successfully.\n";
		}
	}
	else 
		throw NotSignException();
}


std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &presidential)
{
	std::string status;
	if (presidential.getIsSigned())
		status = " signed";
	else
		status = " not signed";

	o 	<< "Form" << presidential.getName() << status
		<< ", grade " << presidential.getSignGrade() << " required to sign"
		<< ", grade " << presidential.getExecGrade() << " required to execute.\n";
		
	return o;
}