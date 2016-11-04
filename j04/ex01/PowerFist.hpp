#ifndef __POWERFIST_H__
#define __POWERFIST_H__
#include <string>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:

	protected:

	public:
		PowerFist();
		PowerFist(PowerFist const &src);
		~PowerFist();
		PowerFist &operator=(PowerFist const &src);

		void attack() const;
};

std::ostream &operator<<(std::ostream &o, PowerFist const &fist);

#endif // __POWERFIST_H__