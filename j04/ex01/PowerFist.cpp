#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist()
	:AWeapon("Power Fist", 8, 50){};

PowerFist::PowerFist(PowerFist const &src)
	:AWeapon("Power Fist", 8, 50)
{
	*this = src;
};

PowerFist::~PowerFist(){};

PowerFist &PowerFist::operator=(PowerFist const &src)
{
	this->_name = src.getName();
	this->_APCost = src.getAPCost();
	this->_damage = src.getDamage();
	return *this;
};

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
};

std::ostream &operator<<(std::ostream &o, PowerFist const &fist)
{
	o 	<< fist.getName() << ", " << fist.getDamage() << " damage points for "
		<< fist.getAPCost() << " action point.\n";
	return o;
};