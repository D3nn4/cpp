#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	:AWeapon("Plasma Rifle", 5, 21){};

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
	:AWeapon("Plasma Rifle", 5, 21)
{
	*this = src;
};

PlasmaRifle::~PlasmaRifle(){};

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src)
{
	this->_name = src.getName();
	this->_APCost = src.getAPCost();
	this->_damage = src.getDamage();
	return *this;
};

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
};

std::ostream &operator<<(std::ostream &o, PlasmaRifle const &rifle)
{
	o 	<< rifle.getName() << ", " << rifle.getDamage() << " damage points for "
		<< rifle.getAPCost() << " action point.\n";
	return o;
};