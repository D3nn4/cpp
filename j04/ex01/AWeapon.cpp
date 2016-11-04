#include <iostream>
#include <string>

#include "AWeapon.hpp"
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	:_name(name),
	_APCost(apcost),
	_damage(damage){};

AWeapon::AWeapon(){};

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
};

AWeapon::~AWeapon(){};

AWeapon &AWeapon::operator=(AWeapon const &src)
{	
	this->_name = src.getName();
	this->_APCost = src.getAPCost();
	this->_damage = src.getDamage();
	return *this;
};

std::string AWeapon::getName() const
{
	return _name;
};

int AWeapon::getAPCost() const
{
	return _APCost;
};

int AWeapon::getDamage() const
{
	return _damage;
};
