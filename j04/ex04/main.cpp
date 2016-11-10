#include <iostream>

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge	*tool_box = new MiningBarge();
	IMiningLaser *deepcore = new DeepCoreMiner();
	tool_box->equip(deepcore);
	IMiningLaser *strip = new StripMiner();
	tool_box->equip(strip);
	IAsteroid *koala = new KoalaSteroid();
	IAsteroid *kreog = new AsteroKreog();
	tool_box->mine(koala);
	tool_box->mine(kreog);

	delete tool_box;
	delete koala;
	delete kreog;


	return 0;
};