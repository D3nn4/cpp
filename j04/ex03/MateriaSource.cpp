#include <iostream>
#include <string>

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
	:IMateriaSource()
{
	_array_materia = new AMateria* [MAX_MATERIA];
	for (int i = 0; i < MAX_MATERIA; ++i)
		_array_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	delete [] _array_materia;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
};

AMateria ** MateriaSource::getArray() const
{
	return _array_materia;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	delete [] _array_materia;
	_array_materia = src.getArray();
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = 0; i < MAX_MATERIA; ++i) {
		if (_array_materia[i] == NULL) {
			_array_materia[i] = m->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; ++i) {
		if (_array_materia[i] && _array_materia[i]->getType().compare(type) == 0)
			return _array_materia[i]->clone();
	}
	return NULL;
}

