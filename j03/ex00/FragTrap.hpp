#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include <string>

#include "ClapTrap.hpp"

#define NB_ATTACKS 5 


class FragTrap : virtual public ClapTrap
{
	private:

	public:

		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &src);

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(const std::string &target);
};

std::ostream &operator<<(std::ostream &o, FragTrap const &fragtp);

#endif // __FRAGTRAP_H__