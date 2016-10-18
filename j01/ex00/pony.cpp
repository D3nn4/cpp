#include <iostream>

#include "pony.hpp"

Pony::Pony(std::string color, std::string type, std::string name)
			:_color(color),
			_type(type),
			_name(name)
{
	std::cout << "pony " << _name << " magically appear." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "pony " << _name << " roasted for diner." << std::endl;
}

void Pony::poop (void) const
{
	std::cout << "Butterflies comes out of " << _name << " ass... WTF ?" << std::endl;
}

void Pony::doMagic (void) const
{
	std::cout << "It's a fracking pony, how can they do magic, you idiot ?" << std::endl;
}

std::string Pony::getColor(void) const
{
	return _color;
}

std::string Pony::getType(void) const
{
	return _type;
}

std::string Pony::getName(void) const
{
	return _name;
}