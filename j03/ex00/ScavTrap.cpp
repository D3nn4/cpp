#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


static void quest(const std::string &target){std::cout << "What... is your quest ?\n";};
static void color(const std::string &target){std::cout << "What... is your favorite color ?\n";};
static void coconut(const std::string &target){std::cout << "What... is the air-speed of an unladen swallow ?\n";};
static void capital(const std::string &target){std::cout << "What... is the capital of Assyria ?\n";};

ScavTrap::ScavTrap(std::string name)
	:ClapTrap(name)
{
	_energy_point = 50;
	_max_energy_point = 50;
	_name = name;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "Hello! I am your new guard bot. \n";
};

ScavTrap::ScavTrap(){};
ScavTrap::ScavTrap(ScavTrap const &src)
{
	if (this != &src)
		*this = src;
	std::cout << "Hello! I am your copy guard bot. \n";
};

ScavTrap::~ScavTrap()
{
	std::cout << "Crap happens.\n";
};

ScavTrap &ScavTrap::operator=(ScavTrap const &character)
{
	std::cout << "Recompiling my challenge code!\n";
};

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout 	<< "SCAV-TP " << _name << " attacks " << target 
				<< " at range, causing " << _ranged_attack_damage
				<< " damage points ! \n";
};
void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout 	<< "SCAV-TP " << _name << " attacks " << target 
				<< " in melee, causing " << _melee_attack_damage
				<< " damage points ! \n";
};
void ScavTrap::takeDamage(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + _armor_damage_reduction - amount) > 0)
			_energy_point = _energy_point + _armor_damage_reduction - amount;
		else 
			_energy_point = 0;
	}
	std::cout 	<< "SCAV-TP " << _name << " took " << amount 
					<< " damage point, " << _energy_point
					<< " energy points remaining ! \n";
};

void ScavTrap::beRepaired(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + amount) < _max_energy_point)
			_energy_point = _energy_point + amount;
		else 
			_energy_point = _max_energy_point;
	}
	std::cout 	<< "SCAV-TP " << _name << " got " << amount 
				<< " repair point, " << _energy_point
				<< " energy points remaining ! \n";
};


void ScavTrap::challengeNewComer(const std::string &target)
{
		static void (*challenge[NB_CHALLENGE])(const std::string &target) = 
		{ quest, color, coconut, capital };
		int random = rand()%NB_CHALLENGE;
		challenge[random](target);
}


/*
std::ostream &operator<<(std::ostream &o, FragTrap const &fragtrap)
{
	o << fragtrap
	return o;
};
*/