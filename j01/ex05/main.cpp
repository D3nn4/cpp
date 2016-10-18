#include <string>
#include <iostream>

#include "Brain.hpp"
#include "Humain.hpp"

int main()
{
	Humain Bob;
	
	std::cout << Bob.identify() << std::endl;
	std::cout << Bob.getBrain().identify() << std::endl;
	
	return 0;
}