#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Zombie.hpp"

const std::string Zombie::_random_name [NB_RANDOM_NAMES] = {
	"Arnold",
	"Freddy",
	"Lisa",
	"Melissa",
	"Albert",
	"Alfred",
	"John",
	"Jane",
	"Jean",
	"Claire",
};

Zombie::Zombie() 
{
	int random =  std::rand() % NB_RANDOM_NAMES;
	setName(_random_name[random]);
	setType("Zombie");
	std::cout << "A lovely creature rises from the deads." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "The poor thing crawls back from where it cames." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(std::string type)
{
	_type = type;
}

void Zombie::setName(std::string name)
{
	_name = name;
}