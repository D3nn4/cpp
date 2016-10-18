#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "ZombieHorde.hpp"
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main (void)
{
	std::srand(std::time(0));

	ZombieEvent event;
	event.setZombieType("runner");

	Zombie *Denna = event.newZombie("Denna");
	event.setZombieType("crawler");
	Zombie *Random =	event.randomChump();
	Denna->announce();
	std::cout << "A horde is comming...\n";

	ZombieHorde horde(4);
	horde.announceAll();

	
	delete Denna;
	delete Random;
	return 0;
}