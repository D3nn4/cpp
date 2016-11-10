#ifndef __STRIPMINER_H__
#define __STRIPMINER_H__
#include <string>

#include "IMiningLaser.hpp"
class IAsteroid;



class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(StripMiner const &src);
		~StripMiner();
		StripMiner &operator=(StripMiner const &src);

		void mine(IAsteroid *target);
};

#endif // __STRIPMINER_H__