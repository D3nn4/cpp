#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrate *roger = new Bureaucrate("Roger", 170);
	//std::cout << *roger;
	Bureaucrate *bob = new Bureaucrate("Bob", 0);
	//std::cout << *bob;
	Bureaucrate *george = new Bureaucrate("George", 75);
	std::cout << *george;
	george->incrGrade();
	george->incrGrade();
	std::cout << *george;
	george->decrGrade();
	george->decrGrade();
	george->decrGrade();
	george->decrGrade();
	std::cout << *george;

	delete george;




	return 0;
}