#ifndef __MUTANT_CLASS__
#define __MUTANT_CLASS__
#include <string>



class Mutant
{

	public:

	Mutant(int health, int attack);
	~Mutant();
	Mutant(Mutant const &src);
	Mutant &operator=(Mutant const &mutant);
	bool operator==(Mutant const &mutant);

	int getHealth() const;
	void setHealth(int const health);
	int getAttack() const;
	void setAttack(int const attack);
	

	private:
		int _health;
		int _attack;
};

std::ostream &operator<<(std::ostream &o, Mutant const &mutant);

#endif //__MUTANT_CLASS__