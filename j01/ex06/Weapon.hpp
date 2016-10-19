#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <string>


class Weapon
{
	public:
		Weapon(std::string wpn);
		~Weapon(void);
		const std::string &getType() const;
		void setType(std::string str);
		
	private:
		std::string _type;
};



#endif // __WEAPON_H__