#include <iostream>
#include <string>

#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
	:Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *\n";
};

RadScorpion::RadScorpion(RadScorpion const &src)
	:Enemy(80, "Rad Scorpion")
{
	*this = src;
};

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
};

void RadScorpion::takeDamage(int damage)
{
	if (damage > 0 && (_HP - damage) >= 0)
		_HP = _HP - damage;
	else if (damage > 0 && (_HP - damage) < 0)
		_HP = 0;
};

RadScorpion &RadScorpion::operator=(RadScorpion const &src)
{
	this->_HP = src.getHP();
	this->_type = src.getType();
	return *this;
};

std::ostream &operator<<(std::ostream &o, RadScorpion const &scorpion)
{
	o 	<< "Enemy is a " << scorpion.getType() << " with " 
		<< scorpion.getHP() << " HP.\n";
	return o;
};