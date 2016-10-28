#include <iostream>
#include <string>

#include "mob.class.hpp"
#include "mutant.class.hpp"

Mob::Mob(int health, int attack)
	:_health(health),
	_attack(attack)
{
	//*this = new Mob(health, attack);
	std::cout << "Mob created \n";
};

Mob::Mob(Mob const &src)
{
	*this = src;
	std::cout << "Mob by copy created \n";
};

Mob::~Mob()
{
	std::cout << "Mob destructed \n";
};

Mob &Mob::operator=(Mob const &mob)
{
	std::cout << "Mob assigned\n";
};

bool Mob::operator==(Mob const &mob)
{
	if(_health == mob.getHealth() 
		&& _attack == mob.getAttack())
		return true;
	return false;
};

int Mob::getHealth() const
{
	return _health;
};

void Mob::setHealth(int const health)
{
	//if (health = 0)
	//	delete *this;
	_health = health;
};

int Mob::getAttack() const
{
	return _attack;
};

void Mob::setAttack(int const attack)
{
	_attack = attack;
};

Mutant Mob::operator+(Mob const &mob)
{
	int health = _health + mob.getHealth();
	int attack = _attack + mob.getAttack();
	Mutant mutant(health, attack);
	Mutant &ref = mutant;
	return ref;
};


std::ostream &operator<<(std::ostream &o, Mob const &mob)
{
	o << "It have " << mob.getHealth() << " HP and make "
					 << mob.getAttack() << " damage points;\n";
	return o;
};