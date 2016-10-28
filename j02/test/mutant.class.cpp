#include <iostream>
#include <string>

#include "mob.class.hpp"
#include "mutant.class.hpp"

Mutant::Mutant(int health, int attack)
	:_health(health),
	_attack(attack)
{
	//*this = new Mutant(health, attack);
	std::cout << "Mutant created \n";
};

Mutant::Mutant(Mutant const &src)
{
	*this = src;
	std::cout << "Mutant by copy created \n";
};

Mutant::~Mutant()
{
	std::cout << "Mutant destructed \n";
};

Mutant &Mutant::operator=(Mutant const &mutant)
{
	std::cout << "Mutant assigned\n";
};

bool Mutant::operator==(Mutant const &mutant)
{
	if(_health == mutant.getHealth() 
		&& _attack == mutant.getAttack())
		return true;
	return false;
};

int Mutant::getHealth() const
{
	return _health;
};

void Mutant::setHealth(int const health)
{
	//if (health = 0)
	//	delete *this;
	_health = health;
};

int Mutant::getAttack() const
{
	return _attack;
};

void Mutant::setAttack(int const attack)
{
	_attack = attack;
};

std::ostream &operator<<(std::ostream &o, Mutant const &mutant)
{
	o << "It have " << mutant.getHealth() << " HP and make "
					 << mutant.getAttack() << " damage points;\n";
	return o;
};