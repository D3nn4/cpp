#include <iostream>
#include <string>

#include "Victim.hpp"

Victim::Victim(std::string name)
	:_name(name)
{
	std::cout 	<< "Some random victim called " << _name 
				<< " just popped !\n";
};

Victim::Victim(Victim const &src)
{
	if (this != &src)
		*this = src;
	std::cout 	<< "Some random victim called " << _name 
				<< " has been copied !\n";
};

Victim::~Victim()
{
	std::cout 	<< "Victim " << _name 
				<< " just died for no apparent reason !\n";
};

Victim &Victim::operator=(Victim const &character)
{
	std::cout << "Victim assigned!\n";
};

void Victim::introduce() const
{
	std::cout 	<< "I am " << _name << ", and I like otters ! \n";
};

std::string Victim::getName() const
{
	return _name;
};

void Victim::getPolymorphed() const
{
	std::cout 	<< _name << "has been turned into a cute little sheep ! \n";
};

std::ostream &operator<<(std::ostream &o, Victim const &victim)
{
	o 	<< "I am " << victim.getName() << ", and I like otters ! \n";
	return o;
};

