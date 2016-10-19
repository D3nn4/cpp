#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	:_name(name)
{
	std::cout << _name << " arrived.\n";
}

HumanB::~HumanB()
{
	std::cout << _name << " went away.\n";
}

void HumanB::attack() const
{
	std::cout 	<< _name << " attacks with his "
				<< _weapon->getType() << ".\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}