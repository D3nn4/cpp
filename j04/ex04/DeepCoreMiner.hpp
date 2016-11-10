#ifndef __DEEPCOREMINER_H__
#define __DEEPCOREMINER_H__
#include <string>

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		DeepCoreMiner(DeepCoreMiner const &src);
		~DeepCoreMiner();
		DeepCoreMiner &operator=(DeepCoreMiner const &src);

		void mine(IAsteroid *target);
};

#endif // __DEEPCOREMINER_H__