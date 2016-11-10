#include <iostream>
#include <string>

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
	:_xp(0),
	_type(type){};

AMateria::~AMateria(){};

AMateria::AMateria(AMateria const &src)
{
	*this = src;
};

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		this->_xp = src.getXP();
	return *this;
};

std::string const & AMateria::getType() const //Returns the materia type
{
	return _type;
};

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return _xp;
};

void AMateria::setXP( unsigned int i)
{
	_xp = i;
}

void AMateria::use(ICharacter& )
{

	_xp = _xp + 10;
};