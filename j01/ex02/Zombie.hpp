#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <string>

#define NB_RANDOM_NAMES 10

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void setType(std::string type);
		void setName(std::string name);
		void announce(void) const;
	
	private:
		std::string _name;
		std::string _type;
		static const std::string _random_name [];	
};



#endif // __ZOMBIE_H__