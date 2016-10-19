#ifndef __HUMAN_A__
#define __HUMAN_A__
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wpn);
		~HumanA(void);
		void attack()const;

	private:
		Weapon &_weapon;
		std::string _name;
			
};



#endif // __HUMAN_A__