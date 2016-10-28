#ifndef __NINJATRAP_H__
#define __NINJATRAP_H__
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
	private:
	
	public:

		NinjaTrap(std::string name);
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &src);
		NinjaTrap &operator=(NinjaTrap const &src);

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void NinjaShoeBox(const ClapTrap &claptrap);
		void NinjaShoeBox(const FragTrap &fragtrap);
		void NinjaShoeBox(const ScavTrap &scavtrap);
		void NinjaShoeBox(const NinjaTrap &ninjatrap);
};

std::ostream &operator<<(std::ostream &o, NinjaTrap const &fragtp);

#endif // __NINJATRAP_H__