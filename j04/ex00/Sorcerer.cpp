#include <iostream>
#include <string>

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
	:_name(name),
	_title(title)
{
	std::cout 	<< _name << ", " << _title
				<< ", is born !\n";
};

Sorcerer::Sorcerer(Sorcerer const &src)
{
	if (this != &src)
		*this = src;
	std::cout 	<< _name << ", " << _title
				<< ", is copied !\n";
};

Sorcerer::~Sorcerer()
{
	std::cout 	<< _name << ", " << _title
				<< ", is dead. Consequences will never be the same \n";
};

Sorcerer &Sorcerer::operator=(Sorcerer const &character)
{
	std::cout << "Sorcerer assigned!\n";
};

void Sorcerer::introduce() const
{
	std::cout 	<< "I am " << _name << ", " << _title
				<< ", and I like ponies ! \n";
};

std::string Sorcerer::getName() const
{
	return _name;
};

std::string Sorcerer::getTitle() const
{
	return _title;
};

void Sorcerer::polymorph(Victim const &victim)
{
	victim.getPolymorphed();
};

void Sorcerer::polymorph(Peon const &peon)
{
	peon.getPolymorphed();
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &sorcerer)
{
	o 	<< "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
		<< ", and I like ponies ! \n";
	return o;
};

