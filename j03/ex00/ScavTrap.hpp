#ifndef __SCAVGTRAP_H__
#define __SCAVGTRAP_H__
#include <string>

#include "ClapTrap.hpp"

#define NB_CHALLENGE 4
class ScavTrap : virtual public ClapTrap
{
	private:
	
	public:

		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &src);

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewComer(const std::string &target);
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &fragtp);

#endif // __SCAVGTRAP_H__