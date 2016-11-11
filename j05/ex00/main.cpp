#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrate *roger = new Bureaucrate("Roger", 170);
	//std::cout << *roger;
	Bureaucrate *bob = new Bureaucrate("Bob", 0);
	//std::cout << *bob;
	Bureaucrate *george = new Bureaucrate("George", 100);
	std::cout << *george;
	george->incrGrade();
	george->incrGrade();
	std::cout << *george;
	george->decrGrade();
	george->decrGrade();
	george->decrGrade();
	george->decrGrade();
	std::cout << *george;

	Form *constitution = new Form("constitution", 55, 55);
	std::cout << *constitution;
	george->signForm(constitution);
	std::cout << *constitution;
	Form *international = new Form("international law", 130, 130);
	std::cout << *international;
	george->signForm(international);
	std::cout << *international;

	Form *Shrubbery = new ShrubberyCreationForm("Garden");
	std::cout << *Shrubbery;
	george->signForm(Shrubbery);
	george->executeForm(*Shrubbery);

	Form *robotomy = new RobotomyRequestForm("Patate");
	std::cout << *robotomy;
	george->signForm(robotomy);
	george->executeForm(*robotomy);

	Form *presidential = new PresidentialPardonForm("innocent");
	std::cout << *presidential;
	george->signForm(presidential);
	george->executeForm(*presidential);


	delete george;
	delete constitution;
	delete international;
	delete Shrubbery;
	delete robotomy;


	return 0;
}