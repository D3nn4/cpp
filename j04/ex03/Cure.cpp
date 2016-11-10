#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure()
	:AMateria("Cure"){};

Cure::~Cure(){};

Cure::Cure(Cure const &src)
	:AMateria()
{
	*this = src;
};

Cure &Cure::operator=(Cure const &src)
{
	this->setXP(src.getXP());
	return *this;
};

Cure* Cure::clone() const
{
	Cure *new_cure = new Cure();
	*new_cure = *this;
	return new_cure; 
};

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout 	<< "Heals " << target.getName()
				<< "'s wounds.\n";
};