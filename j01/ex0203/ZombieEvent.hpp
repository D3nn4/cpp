#ifndef __ZOMBIE_EVENT_H__
#define __ZOMBIE_EVENT_H__
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump(void);

	private:
		std::string _type;	
		

};



#endif // __ZOMBIE_EVENT_H__