#ifndef __AWEAPON_H__
#define __AWEAPON_H__
#include <string>


class AWeapon
{
	private:

	protected:

		AWeapon();// deleted
		std::string  _name;
		int _APCost;
		int _damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		~AWeapon();
		AWeapon &operator=(AWeapon const &src);

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif // __AWEAPON_H__