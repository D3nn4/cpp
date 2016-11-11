#include <iostream>
#include <string>

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &src)
{
	if (this != &src)
		*this = src;
}

Intern::~Intern(){}

Intern &Intern::operator=(Intern const &)
{
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *new_form;
	if (name.compare("presidential Pardon") == 0){
		new_form = new PresidentialPardonForm(target);
		std::cout << "Intern created " << name << ".\n";
		return new_form;
	}
	else if (name.compare("robotomy request") == 0){
		new_form = new RobotomyRequestForm(target);
		std::cout << "Intern created " << name << ".\n";
		return new_form;
	}
	else if (name.compare("shrubbery Creation") == 0){
		new_form = new ShrubberyCreationForm(target);
		std::cout << "Intern created " << name << ".\n";
		return new_form;
	}
	else {
		std::cout << "No form called " << name << ".\n";
		return NULL;
	}
}