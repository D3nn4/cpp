#ifndef __MININGBARGE_H__
#define __MININGBARGE_H__
#include <string>

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"


class MiningBarge
{
	private:
		
		IMiningLaser ** _array_tool;

	public:

		MiningBarge();
		MiningBarge(MiningBarge const &src);
		~MiningBarge();
		MiningBarge &operator=(MiningBarge const &src);	

		IMiningLaser **getArray() const;
		int getMaxTool() const;
		void equip(IMiningLaser *tool);
		void mine(IAsteroid *target) const;
};

#endif // __MININGBARGE_H__