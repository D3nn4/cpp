#include <string>
#include <iostream>
#include <stdlib.h>

#include "Squad.hpp"
#include "ISquad.hpp"

static void deleteTabPtr(ISpaceMarine **tab, int size)
{
	if (size > 0){
		for (int i = 0; i <= size; ++i)
			delete tab[i];
	}
	delete [] tab;
}

Squad::Squad()
	:ISquad(),
	_count(0)
{
	_tab_units = new ISpaceMarine* [1];
	_tab_units[0] = NULL;
};

Squad::Squad(Squad const &src)
{
	deleteTabPtr(_tab_units, _count);
	*this = src;
};

Squad::~Squad() 
{
	deleteTabPtr(_tab_units, _count);
};
Squad &Squad::operator=(Squad const &src)
{
	deleteTabPtr(_tab_units, _count);
	_tab_units = src.getTab();
	_count = src.getCount();
	return *this;
};	

int Squad::getCount() const
{
	return _count;
};
ISpaceMarine** Squad::getTab() const
{
	return _tab_units;
};
int Squad::push(ISpaceMarine *spaceMarine)
{
	if (spaceMarine == NULL)
		return 0;
	int new_size = _count + 1;
	ISpaceMarine **new_tab = new ISpaceMarine* [new_size + 1];
	for (int i = 0; i < new_size; ++i) {
		if (_tab_units[i] == NULL)
			new_tab[i] = spaceMarine;
		else if (spaceMarine == _tab_units[i]){ 
			deleteTabPtr(new_tab, i - 1);
			return _count;
		}
		else
			new_tab[i] = _tab_units[i];
	}	
	new_tab[new_size] = NULL;
	deleteTabPtr(_tab_units, _count);
	_tab_units = new_tab;
	_count = new_size;
	return _count;
};

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i < 0 || i >= _count){
		std::cout << "no " << i << " th unit. \n";
	}
	return _tab_units[i];
};
