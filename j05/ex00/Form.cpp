#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade)
	:_name(name),
	_isSigned(false)
{
	try 
	{ 
		applySignGrade(signGrade);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	try 
	{ 
		applyExecGrade(execGrade);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}

Form::Form(Form const &src)
{
	if(this != &src)
		*this = src;
}

Form::~Form(){}

Form &Form::operator=(Form const &src)
{
	this->_SignGrade = src.getSignGrade();
	this->_execGrade = src.getExecGrade();
	return *this;
}

void Form::applySignGrade(int grade)
{
 	if (grade < getGradeMax())
 		throw GradeTooHighException();
 	else if (grade > getGradeMin())
 		throw GradeTooLowException();
 	else 
 		_SignGrade = grade;
}

void Form::applyExecGrade(int grade)
{
 	if (grade < getGradeMax())
 		throw GradeTooHighException();
 	else if (grade > getGradeMin())
 		throw GradeTooLowException();
 	else 
 		_execGrade = grade;
}

int Form::getGradeMax() const
{
	return 1;
}

int Form::getGradeMin() const
{
	return 150;
}

int Form::getSignGrade() const
{
	return _SignGrade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

void Form::beSigned(Bureaucrate *bureaucrate)
{
	if (bureaucrate->getGrade() <= _SignGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

void Form::beExecute(Bureaucrate *bureaucrate) const
{
	if (_isSigned) {
		if (bureaucrate->getGrade() <= _execGrade)
			std::cout << _name << " executed.\n";
		else {
			throw GradeTooLowException();
		}
	}
	else 
		throw NotSignException();
}


std::ostream &operator<<(std::ostream &o, Form const &form)
{
	std::string status;
	if (form.getIsSigned())
		status = " signed";
	else
		status = " not signed";

	o 	<< "Form " << form.getName() << status
		<< ", grade " << form.getSignGrade() << " required to sign"
		<< ", grade " << form.getExecGrade() << " required to execute.\n";
		
	return o;
}