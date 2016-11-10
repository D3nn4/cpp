#ifndef __IASTEROID_H__
#define __IASTEROID_H__
#include <string>

#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string getName() const = 0;
};

#endif // __IASTEROID_H__