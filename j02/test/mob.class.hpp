#ifndef __MOB_CLASS__
#define __MOB_CLASS__
#include <string>
#include "mutant.class.hpp"


class Mob
{

	public:

	Mob(int health, int attack);
	~Mob();
	Mob(Mob const &src);
	Mob &operator=(Mob const &mob);
	bool operator==(Mob const &mob);
	Mutant operator+(Mob const &mob);

	//void attack(Character &character);

	int getHealth() const;
	void setHealth(int const health);
	int getAttack() const;
	void setAttack(int const attack);
	

	private:
		int _health;
		int _attack;
};

std::ostream &operator<<(std::ostream &o, Mob const &mob);

#endif // __MOB_CLASS__