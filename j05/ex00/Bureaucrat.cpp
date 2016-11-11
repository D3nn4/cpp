#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrate::Bureaucrate(std::string name, int grade)
	:_name(name)
{
	try 
	{ 
		applyGrade(grade);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		delete this;
	}
}

Bureaucrate::Bureaucrate(Bureaucrate const &src)
{
	if(this != &src)
		*this = src;
}

Bureaucrate::~Bureaucrate(){}

Bureaucrate &Bureaucrate::operator=(Bureaucrate const &src)
{
	this->_grade = src.getGrade();
	return *this;
}

void Bureaucrate::applyGrade(int grade)
{
 	if (grade < getGradeMax())
 		throw GradeTooHighException();
 	else if (grade > getGradeMin())
 		throw GradeTooLowException();
 	else 
 		_grade = grade;
}

int Bureaucrate::getGradeMax() const
{
	return 1;
}

int Bureaucrate::getGradeMin() const
{
	return 150;
}

int Bureaucrate::getGrade() const
{
	return _grade;
}

std::string Bureaucrate::getName() const
{
	return _name;
}

void Bureaucrate::incrGrade()
{
	try 
	{ 
		applyGrade(_grade - 1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}
void Bureaucrate::decrGrade()
{
	try 
	{ 
		applyGrade(_grade + 1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}

void Bureaucrate::signForm(Form *form)
{
	try
	{
		form->beSigned(this);
	}
	catch(std::exception &e)
	{
		std::cout 	<< _name << " cannot sign " << form->getName()
					<< " because " << e.what();
		return;
	}
	std::cout << _name << " signs " << form->getName() << ".\n";
}

void Bureaucrate::executeForm(Form const & form)
{
	try
	{
		form.beExecute(this);
	}
	catch(std::exception &e)
	{
		std::cout 	<< _name << " cannot execute " << form.getName()
					<< " because " << e.what();
		return;
	}
	std::cout << _name << " execute " << form.getName() << ".\n";
}

std::ostream &operator<<(std::ostream &o, Bureaucrate const &bureaucrate)
{
	o 	<< bureaucrate.getName() << ", bureaucrate grade "
	<< bureaucrate.getGrade() << ".\n";
		
	return o;
}