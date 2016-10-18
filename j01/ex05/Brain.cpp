#include <iostream>
#include <string>
#include <sstream>

#include "Brain.hpp"

Brain::Brain()
{	
	std::cout << "Hi this is brain !\n";
}

Brain::~Brain(void)
{
	std::cout << "Bye bye brain !\n";
}

std::string Brain::identify() const
{
	std::string brain_adress;
	std::ostringstream temp;
	temp << this;
	brain_adress = temp.str();
	return brain_adress;
}