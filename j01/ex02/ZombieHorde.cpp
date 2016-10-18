#include <iostream>
#include <string>

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb_zomb)
	: _nb_zomb(nb_zomb)
{
	_horde = new Zombie[_nb_zomb]; 
	std::cout << "A hell lot of zombies rise from nowhere" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _horde;
	std::cout << "The horde suddenly desapeare." << std::endl;
}

void ZombieHorde::announceAll(void) const
{
	for (int i = 0; i < _nb_zomb; i++)
		_horde[i].announce();
}

