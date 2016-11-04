#ifndef __SUPERMUTANT_H__
#define __SUPERMUTANT_H__
#include <string>

#include "Enemy.hpp"

#define RESISTANCE 3

class SuperMutant : public Enemy
{
	private:

	protected:
				
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &src);
		~SuperMutant();
		SuperMutant &operator=(SuperMutant const &src);

		void takeDamage(int damage);
};


std::ostream &operator<<(std::ostream &o, SuperMutant const &mutant);

#endif // __SUPERMUTANT_H__