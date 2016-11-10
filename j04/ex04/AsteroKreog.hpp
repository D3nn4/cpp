#ifndef __ASTEROKREOG_H__
#define __ASTEROKREOG_H__
#include <string>

#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

class AsteroKreog : public IAsteroid
{
	private:
		std::string _name;

	public:
		AsteroKreog();
		AsteroKreog(AsteroKreog const &src);
		~AsteroKreog();
		AsteroKreog &operator=(AsteroKreog const &src);	

		std::string beMined(StripMiner *) const;
		std::string beMined(DeepCoreMiner *) const;
		std::string getName() const;
};

#endif // __ASTEROKREOG_H__