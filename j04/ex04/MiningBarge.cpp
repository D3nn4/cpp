#include <string>
#include <iostream>

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	_array_tool = new IMiningLaser* [getMaxTool()];
	for (int i = 0; i < getMaxTool(); ++i)
		_array_tool[i] = NULL;
}

MiningBarge::MiningBarge(MiningBarge const &src)
{
	*this = src;
}

MiningBarge::~MiningBarge()
{
	for (int i = 0; i < getMaxTool(); ++i) {
		delete _array_tool[i];
	}
	delete [] _array_tool;
}

MiningBarge &MiningBarge::operator=(MiningBarge const &src)
{
	delete [] _array_tool;
	_array_tool = src.getArray();
	return *this;
}

IMiningLaser ** MiningBarge::getArray() const
{
	return _array_tool;
}

int MiningBarge::getMaxTool() const
{
	return 4;
}

void MiningBarge::equip(IMiningLaser *tool)
{
	if (tool == NULL)
		return;
	for (int i = 0; i < getMaxTool(); ++i) {
		if (_array_tool[i] == NULL) {
			_array_tool[i] = tool;
			return;
		}
	}
}

void MiningBarge::mine(IAsteroid *target) const
{
	for (int i = 0; i < getMaxTool(); ++i){
		if (_array_tool[i])
			_array_tool[i]->mine(target);
	}
}