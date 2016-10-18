#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "A dark myst seems to rise from nowhere" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "The myst seems to fade and you can see the sky again." << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* new_riser = new Zombie();
	new_riser->setName(name);
	new_riser->setType(_type);
	return new_riser;
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *new_riser = new Zombie;
	new_riser->setType(_type);
	new_riser->announce();
	return new_riser;
}