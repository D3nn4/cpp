#include <string>
#include <iostream>

#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
	:_name("KoalaSteroid"){}

KoalaSteroid::KoalaSteroid(KoalaSteroid const &src)
{
	*this = src;
}

KoalaSteroid::~KoalaSteroid(){}

KoalaSteroid &KoalaSteroid::operator=(KoalaSteroid const &src)
{
	this->_name = src.getName();
	return *this;
}

std::string KoalaSteroid::beMined(StripMiner *) const
{
	return "Krpite";
}

std::string KoalaSteroid::beMined(DeepCoreMiner *) const
{
	return "Zazium";
}

std::string KoalaSteroid::getName() const
{
	return _name;
}