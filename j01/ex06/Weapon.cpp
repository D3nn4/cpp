#include <iostream>
#include <string>

#include "Weapon.hpp"

Weapon::Weapon(std::string wpn)
	: _type(wpn)
{
	std::cout << "You loot a " << _type << ".\n";
}

Weapon::~Weapon()
{
	std::cout << "You lost your Weapon.\n";
}

void Weapon::setType(std::string str)
{
	_type = str;
}

const std::string &Weapon::getType() const
{
	const std::string &ref = _type;
	return ref;
}