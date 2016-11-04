#include <string>
#include <iostream>
#include <stdlib.h>

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
	:ISpaceMarine()
{
	std::cout << "* teleports from space *\n";
};

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
};

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
};

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &src)
{	
	*this = src;
	return *this;
};	

ISpaceMarine* AssaultTerminator::clone() const
{
	return new AssaultTerminator;
};

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !\n";
};

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
};

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
};