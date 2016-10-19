#ifndef __HUMAN_B__
#define __HUMAN_B__
#include <string>


class HumanB
{
	public:
		public:
		HumanB(std::string name);
		~HumanB(void);
		void attack()const;
		void setWeapon(Weapon &weapon);

	private:
		Weapon *_weapon;
		std::string _name;		
};



#endif // __HUMAN_B__