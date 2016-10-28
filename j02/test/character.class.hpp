#ifndef __CHARACTER_CLASS__
#define __CHARACTER_CLASS__
#include <string>

#include "mob.class.hpp"
#include "mutant.class.hpp"

class Character
{

	public:

	Character(int health, int attack);
	~Character();
	Character(Character const &src);
	Character &operator=(Character const &character);
	bool operator==(Character const &character);

	void attack(Mob &mob);
	void attack(const Mutant &mutant);


	int getHealth() const;
	void setHealth(int const health);
	int getAttack() const;
	void setAttack(int const attack);
	

	private:
		int _health;
		int _attack;
};

std::ostream &operator<<(std::ostream &o, Character const &character);

#endif // __CHARACTER_CLASS__