#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <string>

class ClapTrap
{
	protected:

		int _hit_point;
		int _max_hit_point;
		int _energy_point;
		int _max_energy_point;
		int _lvl;
		std::string _name;
		int _melee_attack_damage;
		int _ranged_attack_damage;
		int _armor_damage_reduction;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &src);

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &fragtp);

#endif // __CLAPTRAP_H__