#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice()
	:AMateria("Ice"){};

Ice::~Ice(){};

Ice::Ice(Ice const &src)
	:AMateria()
{
	*this = src;
};

Ice &Ice::operator=(Ice const &src)
{
	this->setXP(src.getXP());
	return *this;
};

Ice* Ice::clone() const
{
	Ice *new_ice = new Ice();
	*new_ice = *this;
	return new_ice; 
};

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout 	<< "Shoot an ice bolt at " << target.getName()
				<< ".\n";
};