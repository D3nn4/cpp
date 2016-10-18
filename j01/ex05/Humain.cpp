#include <iostream>
#include <string>
#include <sstream>

#include "Brain.hpp"
#include "Humain.hpp"

Humain::Humain()
{	
	std::cout << "Hi this is Humain !\n";
}

Humain::~Humain(void)
{
	std::cout << "Bye bye Humain !\n";
}

std::string Humain::identify(void) const
{
	return _brain.identify();
}

const Brain &Humain::getBrain() const
{
	const Brain &ref = _brain;
	return ref;
}