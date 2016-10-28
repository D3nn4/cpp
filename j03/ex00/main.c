#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	
	srand (time(NULL));

	std::cout << "***************************************\n";
	FragTrap red("Red");
	red.rangedAttack("Blue");
	red.meleeAttack("Blue");
	red.takeDamage(70);
	red.vaulthunter_dot_exe("Blue");
	red.vaulthunter_dot_exe("Blue");
	red.beRepaired(20);
	std::cout << "***************************************\n";

	ScavTrap patate("patate");
	patate.rangedAttack("rabbit");
	patate.meleeAttack("rabbit");
	patate.takeDamage(70);
	patate.challengeNewComer("rabbit");
	patate.challengeNewComer("rabbit");
	patate.beRepaired(20);
	std::cout << "***************************************\n";

	NinjaTrap naruto("Naruto");
	naruto.rangedAttack("Sasuke");
	naruto.meleeAttack("Sasuke");
	naruto.takeDamage(70);
	naruto.NinjaShoeBox(naruto);
	naruto.NinjaShoeBox(patate);
	naruto.NinjaShoeBox(red);
	naruto.beRepaired(20);
	std::cout << "***************************************\n";

	SuperTrap SUPER("SUPER");
	SUPER.rangedAttack("Sasuke");
	SUPER.meleeAttack("Sasuke");
	SUPER.NinjaShoeBox(red);
	SUPER.vaulthunter_dot_exe("Blue");
	SUPER.takeDamage(70);
	SUPER.beRepaired(20);



	return 0;
}