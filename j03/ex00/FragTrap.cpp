#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "ClapTrap.hpp"


static void badassEnemy(const std::string &target){std::cout << "Is it dead? Can, can I open my eyes now?\n";};
static void multipleEnemy(const std::string &target){std::cout << "Step right up, to the Bulletnator 9000!\n";};
static void grenade(const std::string &target){std::cout << "Hot potato!\n";};
static void freezeEnemy(const std::string &target){std::cout << "Aww! Now I want a snow cone.\n";};
static void criticalKill(const std::string &target){std::cout << "Flesh fireworks!\n";};

FragTrap::FragTrap(std::string name)
	:ClapTrap(name)

{
	_energy_point = 100;
	_max_energy_point = 100;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "Hello! I am your new steward bot. \n";
};

FragTrap::FragTrap(){};
FragTrap::FragTrap(FragTrap const &src)
{
	if (this != &src)
		*this = src;
	std::cout << "Hello! I am your copy steward bot. \n";
};

FragTrap::~FragTrap()
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death \n";
};

FragTrap &FragTrap::operator=(FragTrap const &character)
{
	std::cout << "Recompiling my combat code!\n";
};

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout 	<< "FR4G-TP " << _name << " attacks " << target 
				<< " at range, causing " << _ranged_attack_damage
				<< " damage points ! \n";
};
void FragTrap::meleeAttack(const std::string &target)
{
	std::cout 	<< "FR4G-TP " << _name << " attacks " << target 
				<< " in melee, causing " << _melee_attack_damage
				<< " damage points ! \n";
};
void FragTrap::takeDamage(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + _armor_damage_reduction - amount) > 0)
			_energy_point = _energy_point + _armor_damage_reduction - amount;
		else 
			_energy_point = 0;
	}
	std::cout 	<< "FR4G-TP " << _name << " took " << amount 
					<< " damage point, " << _energy_point
					<< " energy points remaining ! \n";
};

void FragTrap::beRepaired(unsigned int point)
{
	int amount = (int) point;
	if (amount != 0){
		if ((_energy_point + amount) < _max_energy_point)
			_energy_point = _energy_point + amount;
		else 
			_energy_point = _max_energy_point;
	}
	std::cout 	<< "FR4G-TP " << _name << " got " << amount 
				<< " repair point, " << _energy_point
				<< " energy points remaining ! \n";
};


void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (_energy_point >= 25){
		static void (*Attacks[NB_ATTACKS])(const std::string &target) = 
		{ badassEnemy, multipleEnemy, grenade, freezeEnemy, criticalKill};
		int random = rand()%NB_ATTACKS;
		Attacks[random](target);
		_energy_point = _energy_point - 25;
	}
	else 
		std::cout << "Need... Energy...ZzzzZZ.\n";
	
}


/*
std::ostream &operator<<(std::ostream &o, FragTrap const &fragtrap)
{
	o << fragtrap
	return o;
};
*/