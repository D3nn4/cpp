#ifndef __PLASMARIFLE_H__
#define __PLASMARIFLE_H__
#include <string>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	protected:

	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &src);
		~PlasmaRifle();
		PlasmaRifle &operator=(PlasmaRifle const &src);

		void attack() const;
};

std::ostream &operator<<(std::ostream &o, PlasmaRifle const &rifle);

#endif // __PLASMARIFLE_H__