#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:Form("Robotomy Form", 72, 45),
	_target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	:Form("Robotomy Form", 72, 45)
{
	if(this != &src)
		*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	this->_target = src.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}


void RobotomyRequestForm::beExecute(Bureaucrate *bureaucrate) const
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


std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &robotomy)
{
	std::string status;
	if (robotomy.getIsSigned())
		status = " signed";
	else
		status = " not signed";

	o 	<< "Form" << robotomy.getName() << status
		<< ", grade " << robotomy.getSignGrade() << " required to sign"
		<< ", grade " << robotomy.getExecGrade() << " required to execute.\n";
		
	return o;
}