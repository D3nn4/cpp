#include <string>
#include <iostream>

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
	:IMiningLaser(){}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &src)
{
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner(){}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &src)
{
	*this = src;
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *target)
{
	std::cout << "*mining deep... got " << target->beMined(this) << " !\n";
}