#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
	:NinjaTrap(name), FragTrap(name)
{
	_hit_point = FragTrap::_hit_point;
	_max_hit_point = FragTrap::_max_hit_point;
	_energy_point = NinjaTrap::_energy_point;
	_max_energy_point = NinjaTrap::_energy_point;
	_name = name;
	_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	_armor_damage_reduction = FragTrap::_armor_damage_reduction;
	std::cout << "*A SUPER appear* \n";
};


SuperTrap::SuperTrap(SuperTrap const &src)
{
	if (this != &src)
		*this = src;
	std::cout << "*A second SUPER appear*  \n";
};

SuperTrap::~SuperTrap()
{
	std::cout << "*The SUPER desappear* \n";
};

SuperTrap &SuperTrap::operator=(SuperTrap const &character)
{
	std::cout << "*Two SUPER fused in one*\n";
};

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
};
void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
};
void SuperTrap::takeDamage(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + _armor_damage_reduction - amount) > 0)
			_energy_point = _energy_point + _armor_damage_reduction - amount;
		else 
			_energy_point = 0;
	}
	std::cout 	<< "SUPER-TP " << _name << " took " << amount 
					<< " damage point, " << _energy_point
					<< " energy points remaining ! \n";
};

void SuperTrap::beRepaired(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + amount) < _max_energy_point)
			_energy_point = _energy_point + amount;
		else 
			_energy_point = _max_energy_point;
	}
	std::cout 	<< "SUPER-TP " << _name << " got " << amount 
				<< " repair point, " << _energy_point
				<< " energy points remaining ! \n";
};
/*
std::ostream &operator<<(std::ostream &o, FragTrap const &fragtrap)
{
	o << fragtrap
	return o;
};
*/