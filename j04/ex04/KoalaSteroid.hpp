#ifndef __KOALASTEROID_H__
#define __KOALASTEROID_H__
#include <string>

#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

class KoalaSteroid : public IAsteroid
{
	private:
		std::string _name;

	public:
		KoalaSteroid();
		KoalaSteroid(KoalaSteroid const &src);
		~KoalaSteroid();
		KoalaSteroid &operator=(KoalaSteroid const &src);	

		std::string beMined(StripMiner *) const;
		std::string beMined(DeepCoreMiner *) const;
		std::string getName() const;
};

#endif // __KOALASTEROID_H__