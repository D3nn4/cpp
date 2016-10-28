#include <iostream>
#include <string>

#include "character.class.hpp"

Character::Character(int health, int attack)
	:_health(health),
	_attack(attack)
{
	std::cout << "Character created \n";
};

Character::Character(Character const &src)
{
	*this = src;
	std::cout << "Character by copy created \n";
};

Character::~Character()
{
	std::cout << "Character destructed \n";
};

Character &Character::operator=(Character const &character)
{
	std::cout << "Character assigned\n";
};

bool Character::operator==(Character const &character)
{
	if(_health == character.getHealth() 
		&& _attack == character.getAttack())
		return true;
	return false;
};

int Character::getHealth() const
{
	return _health;
};

void Character::setHealth(int const health)
{
	_health = health;
};

int Character::getAttack() const
{
	return _attack;
};

void Character::setAttack(int const attack)
{
	_attack = attack;
};

void Character::attack(Mob &mob)
{
	std::cout <<"attack mob\n";
};
void Character::attack(Mutant &mutant)
{
	std::cout <<"attack mutant\n";
};

std::ostream &operator<<(std::ostream &o, Character const &character)
{
	o << "You have " << character.getHealth() << " HP and make "
					 << character.getAttack() << " damage points;\n";
	return o;
};