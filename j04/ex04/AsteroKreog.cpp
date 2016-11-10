#include <string>
#include <iostream>

#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
	:_name("AsteroKreog"){}

AsteroKreog::AsteroKreog(AsteroKreog const &src)
{
	*this = src;
}

AsteroKreog::~AsteroKreog(){}

AsteroKreog &AsteroKreog::operator=(AsteroKreog const &src)
{
	this->_name = src.getName();
	return *this;
}

std::string AsteroKreog::beMined(StripMiner *) const
{
	return "Flavium";
}

std::string AsteroKreog::beMined(DeepCoreMiner *) const
{
	return "Thorite";
}

std::string AsteroKreog::getName() const
{
	return _name;
}