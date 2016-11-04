#include <string>
#include <iostream>
#include <stdlib.h>

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
	:ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle.\n";
};

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
};

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
};

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &src)
{	
	*this = src;
	return *this;
};	

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine;
};

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !\n";
};

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *\n";
};

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *\n";
};