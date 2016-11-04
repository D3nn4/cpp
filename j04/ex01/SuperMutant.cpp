#include <iostream>
#include <string>

#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
	:Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !\n";
};

SuperMutant::SuperMutant(SuperMutant const &src)
	:Enemy(170, "Super Mutant")
{
	*this = src;
};

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaaargh...\n";
};

SuperMutant &SuperMutant::operator=(SuperMutant const &src)
{
	this->_HP = src.getHP();
	this->_type = src.getType();
	return *this;
};

void SuperMutant::takeDamage(int damage)
{
	damage = damage - RESISTANCE;
	if (damage > 0 && (_HP - damage) > 0)
		_HP = _HP - damage;
	else if (damage > 0 && (_HP - damage) < 0)
		_HP = 0;
};

std::ostream &operator<<(std::ostream &o, SuperMutant const &mutant)
{
	o 	<< "Enemy is a " << mutant.getType() << " with " 
		<< mutant.getHP() << " HP.\n";
	return o;
};