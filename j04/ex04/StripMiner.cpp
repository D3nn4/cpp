#include <string>
#include <iostream>

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include "StripMiner.hpp"

StripMiner::StripMiner()
	:IMiningLaser(){}

StripMiner::StripMiner(StripMiner const &src)
{
	*this = src;
}

StripMiner::~StripMiner(){}

StripMiner &StripMiner::operator=(StripMiner const &src)
{
	*this = src;
	return *this;
}

void StripMiner::mine(IAsteroid *target)
{
	std::cout << "*strip mining... got " << target->beMined(this) << " !\n";
}