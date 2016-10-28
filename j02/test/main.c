#include <iostream>
#include <string>

#include "mob.class.hpp"
#include "mutant.class.hpp"
#include "character.class.hpp"

int main()
{
	Character patate(100, 20);
	Mob dromadaire(25, 10);
	Mob llama(30, 5);
	Mutant llamadaire = dromadaire + llama;

	std::cout << "patate :\n" << patate << std::endl;
	std::cout << "dromadaire :\n" << dromadaire << std::endl;
	std::cout << "llama :\n" <<  llama << std::endl;
	std::cout << "llamadaire :\n" << llamadaire << std::endl;
	patate.attack(dromadaire);
	patate.attack(llama);
	patate.attack(llamadaire);
	patate.attack(dromadaire + llama);



	return 0;
}