#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

#define AP_DEFAULT 40
class Character
{
	private:
		
		Character(); //deleted
		std::string _name;
		int _AP;
		AWeapon *_weapon;
	
	public:

		Character(std::string const & name);
		Character(Character const &src);
		~Character();
		Character &operator=(Character const &src);

		void recoverAP();
		void equip(AWeapon* ptr_weapon);
		void attack(Enemy *target);
		std::string getName() const;
		AWeapon *getWeapon() const;
		int getAP() const;
};

std::ostream &operator<<(std::ostream &o, Character const &perso);

#endif // __CHARACTER_H__