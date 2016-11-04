#ifndef __RADSCORPION_H__
#define __RADSCORPION_H__
#include <string>

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:

	protected:
			
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &src);
		~RadScorpion();
		RadScorpion &operator=(RadScorpion const &src);

		void takeDamage(int damage);
};


std::ostream &operator<<(std::ostream &o, RadScorpion const &scorpion);

#endif // __RADSCORPION_H__