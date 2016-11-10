#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

Bureaucrate::Bureaucrate(std::string name, int grade)
	:_name(name)
{
	try 
	{ 
		applyGrade(grade);
	}
	catch(GradeTooHighException &e)
	{
		e.what();
		delete this;
	}
	catch(GradeTooLowException &e)
	{
		e.what();
		delete this;
	}
	catch(std::exception &e)
	{
		std::cout << "Something went wrong. \n";
		delete this;
	}
}

Bureaucrate::Bureaucrate(Bureaucrate const &src)
{
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
 		throw Bureaucrate::GradeTooHighException();
 	else if (grade > getGradeMin())
 		throw Bureaucrate::GradeTooLowException();
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
	catch(GradeTooHighException &e)
	{
		e.what();
	}
	catch(GradeTooLowException &e)
	{
		e.what();
	}
	catch(std::exception &e)
	{
		std::cout << "Something went wrong.\n";
	}
}
void Bureaucrate::decrGrade()
{
	try 
	{ 
		applyGrade(_grade + 1);
	}
	catch(GradeTooHighException &e)
	{
		e.what();
	}
	catch(GradeTooLowException &e)
	{
		e.what();
	}
	catch(std::exception &e)
	{
		std::cout << "Something went wrong.\n";
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrate const &bureaucrate)
{
	o 	<< bureaucrate.getName() << ", bureaucrate grade "
	<< bureaucrate.getGrade() << ".\n";
		
	return o;
}