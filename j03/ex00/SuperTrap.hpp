#ifndef __SUPERTRAP_H__
#define __SUPERTRAP_H__
#include <string>


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public NinjaTrap, public FragTrap
{
	private:
	
	public:

		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(SuperTrap const &src);
		SuperTrap &operator=(SuperTrap const &src);

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

std::ostream &operator<<(std::ostream &o, SuperTrap const &fragtp);

#endif // __SUPERTRAP_H__