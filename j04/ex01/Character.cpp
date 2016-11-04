#include <iostream>
#include <string>

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"

Character::Character(std::string const & name)
	:_name(name),
	_AP(AP_DEFAULT),
	_weapon(NULL){};

Character::Character(){};

Character::Character(Character const &src)
{
	*this = src;
};

Character::~Character(){};

Character &Character::operator=(Character const &src)
{
	this->_name = src.getName();
	this->_AP = src.getAP();
	this->_weapon = src.getWeapon();
	return *this;
};

std::string Character::getName() const
{
	return _name;
};

void Character::recoverAP()
{
	int to_recover = 10;
	if (_AP < AP_DEFAULT){
		if((_AP + to_recover) > AP_DEFAULT)
			_AP = AP_DEFAULT;
		else 
			_AP = _AP + to_recover;
	}
};
void Character::equip(AWeapon *ptr_weapon)
{
	_weapon = ptr_weapon;
};
void Character::attack(Enemy *target)
{
	if (_weapon && _AP >= _weapon->getAPCost()){
		std::cout 	<< _name << " attacks " << target->getType()
					<< " with a " << _weapon->getName() << ".\n";
		_AP = _AP - _weapon->getAPCost();
		_weapon->attack();
		target->takeDamage(_weapon->getDamage());
		if (target->getHP() <= 0)
			delete(target);
	}
};

AWeapon *Character::getWeapon() const
{
	return _weapon;
};

int Character::getAP() const
{
	return _AP;
};

std::ostream &operator<<(std::ostream &o, Character const &perso)
{
	if (perso.getWeapon() == NULL){
		o 	<< perso.getName() << " has " << perso.getAP() 
			<< " AP and is unarmed.\n";
	}
	else {
		o 	<< perso.getName() << " has " << perso.getAP() 
			<< " AP and wields a " << perso.getWeapon()->getName() << ".\n";
	}
	return o;
};