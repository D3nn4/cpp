#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn)
	: _weapon(wpn),
	_name(name)
{
	std::cout << _name << " arrived.\n";
}

HumanA::~HumanA()
{
	std::cout << _name << " went away.\n";
}

void HumanA::attack() const
{
	std::cout 	<< _name << " attacks with his "
				<< _weapon.getType() << ".\n";
}