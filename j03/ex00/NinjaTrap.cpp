#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
	:ClapTrap(name)
{
	_hit_point = 60;
	_max_hit_point = 60;
	_energy_point = 120;
	_max_energy_point = 120;
	_name = name;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "*A cloud of smoke appear* \n";
};

NinjaTrap::NinjaTrap(){};
NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	if (this != &src)
		*this = src;
	std::cout << "*A second cloud of smoke appear*  \n";
};

NinjaTrap::~NinjaTrap()
{
	std::cout << "*The cloud of smoke desappear* \n";
};

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &character)
{
	std::cout << "*Two smoke cloud fused in one*\n";
};

void NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout 	<< "NINJA-TP " << _name << " attacks " << target 
				<< " at range, causing " << _ranged_attack_damage
				<< " damage points ! \n";
};
void NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout 	<< "NINJA-TP " << _name << " attacks " << target 
				<< " in melee, causing " << _melee_attack_damage
				<< " damage points ! \n";
};
void NinjaTrap::takeDamage(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + _armor_damage_reduction - amount) > 0)
			_energy_point = _energy_point + _armor_damage_reduction - amount;
		else 
			_energy_point = 0;
	}
	std::cout 	<< "NINJA-TP " << _name << " took " << amount 
					<< " damage point, " << _energy_point
					<< " energy points remaining ! \n";
};

void NinjaTrap::beRepaired(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + amount) < _max_energy_point)
			_energy_point = _energy_point + amount;
		else 
			_energy_point = _max_energy_point;
	}
	std::cout 	<< "NINJA-TP " << _name << " got " << amount 
				<< " repair point, " << _energy_point
				<< " energy points remaining ! \n";
};

void NinjaTrap::NinjaShoeBox(const ClapTrap &claptrap)
{
	std::cout << "NinjaTrap react to claptrap\n";
};
void NinjaTrap::NinjaShoeBox(const FragTrap &fragtrap)
{
	std::cout << "NinjaTrap react to fragtrap\n";
};
void NinjaTrap::NinjaShoeBox(const ScavTrap &scavtrap)
{
	std::cout << "NinjaTrap react to scavtrap\n";
};
void NinjaTrap::NinjaShoeBox(const NinjaTrap &ninjatrap)
{
	std::cout << "NinjaTrap react to ninjatrap\n";
};

/*
std::ostream &operator<<(std::ostream &o, FragTrap const &fragtrap)
{
	o << fragtrap
	return o;
};
*/