#ifndef __ZOMBIE_HORDE_H__
#define __ZOMBIE_HORDE_H__
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#define NB_RANDOM_NAMES 10

class ZombieHorde
{
	public:
		ZombieHorde(int nb_zomb);
		~ZombieHorde(void);
		void announceAll(void) const;
		
	private:
		int _nb_zomb;
		Zombie *_horde;
};



#endif // __ZOMBIE_HORDE_H__