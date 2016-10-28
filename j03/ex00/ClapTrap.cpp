#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:_hit_point(100),
	_max_hit_point(100),
	_energy_point(200),
	_max_energy_point(200),
	_lvl(1),
	_name(""),
	_melee_attack_damage(0),
	_ranged_attack_damage(0),
	_armor_damage_reduction(0)

{
	std::cout << "Hello! I am your new Cl4Ptr4p. \n";
};

ClapTrap::ClapTrap(std::string name)
	:_hit_point(100),
	_max_hit_point(100),
	_energy_point(200),
	_max_energy_point(200),
	_lvl(1),
	_name(name),
	_melee_attack_damage(0),
	_ranged_attack_damage(0),
	_armor_damage_reduction(0)

{
	std::cout << "Hello! I am your new Cl4Ptr4p. \n";
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
	if (this != &src)
		*this = src;
	std::cout << "Hello! I am your copy Cl4Ptr4p. \n";
};

ClapTrap::~ClapTrap()
{
	std::cout << "Cl4p out.\n";
};

ClapTrap &ClapTrap::operator=(ClapTrap const &character)
{
	std::cout << "Cl4Ptr4p assigned!\n";
};

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout 	<< "CLAP-TP " << _name << " attacks " << target 
				<< " at range, causing " << _ranged_attack_damage
				<< " damage points ! \n";
};
void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout 	<< "CLAP-TP " << _name << " attacks " << target 
				<< " in melee, causing " << _melee_attack_damage
				<< " damage points ! \n";
};
void ClapTrap::takeDamage(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + _armor_damage_reduction - amount) > 0)
			_energy_point = _energy_point + _armor_damage_reduction - amount;
		else 
			_energy_point = 0;
	}
	std::cout 	<< "CLAP-TP " << _name << " took " << amount 
					<< " damage point, " << _energy_point
					<< " energy points remaining ! \n";
};

void ClapTrap::beRepaired(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + amount) < _max_energy_point)
			_energy_point = _energy_point + amount;
		else 
			_energy_point = _max_energy_point;
	}
	std::cout 	<< "CLAP-TP " << _name << " got " << amount 
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