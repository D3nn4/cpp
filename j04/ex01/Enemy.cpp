#include <iostream>
#include <string>

#include "Enemy.hpp"
Enemy::Enemy(int hp, std::string const &type)
	:_HP(hp),
	_type(type){};

Enemy::Enemy(){};

Enemy::Enemy(Enemy const &src)
{
	*this = src;
};

Enemy::~Enemy(){};

Enemy &Enemy::operator=(Enemy const &src)
{
	this->_HP = src.getHP();
	this->_type = src.getType();
	return *this;
};

std::string Enemy::getType() const
{
	return _type;
};

int Enemy::getHP() const
{
	return _HP;
};

void Enemy::takeDamage(int damage)
{
	if (damage > 0 && (_HP - damage) >= 0)
		_HP = _HP - damage;
	else if (damage > 0 && (_HP - damage) < 0)
		_HP = 0;
};

std::ostream &operator<<(std::ostream &o, Enemy const &enemy)
{
	o 	<< "Enemy is a " << enemy.getType() << " with " 
		<< enemy.getHP() << " HP.\n";
	return o;
};