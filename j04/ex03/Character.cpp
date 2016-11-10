#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character(std::string name)
	:ICharacter(),
	_name(name)
{
	_array_materia = new AMateria* [MAX_MATERIA];
	for (int i = 0; i < MAX_MATERIA; ++i)
		_array_materia[i] = NULL;
}

Character::~Character()
{
	delete [] _array_materia;
}

Character::Character(Character const &src)
{
	*this = src;
}

AMateria ** Character::getArray() const
{
	return _array_materia;
}

Character &Character::operator=(Character const &src)
{
	this->_name = src.getName();
	delete [] _array_materia;
	this->_array_materia = src.getArray();
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = 0; i < MAX_MATERIA; ++i) {
		if (_array_materia[i] == NULL) {
			_array_materia[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < MAX_MATERIA)
		_array_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_array_materia[idx])
		_array_materia[idx]->use(target);
}