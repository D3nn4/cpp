#ifndef __IMININGLASER_H__
#define __IMININGLASER_H__
#include <string>

class IAsteroid;

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif // __IMININGLASER_H__