#include <iostream>
#include <string>

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name)
	:Victim(name)
{
	std::cout 	<< "Zog zog\n";
};

Peon::Peon(Peon const &src)
{
	if (this != &src)
		*this = src;
	std::cout 	<< "Zog zog bis\n";
};

Peon::~Peon()
{
	std::cout 	<< "Bleuark...\n";
};
Peon &Peon::operator=(Peon const &character)
{
	std::cout << "Peon assigned!\n";
};

void Peon::getPolymorphed() const
{
	std::cout 	<< _name << "has been turned into a pink unicorn ! \n";
};

std::ostream &operator<<(std::ostream &o, Peon const &peon)
{
	o 	<< "I am " << peon.getName() << ", and I like otters ! \n";
	return o;
};

