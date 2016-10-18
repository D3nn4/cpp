#include <iostream>

#include "pony.hpp"
Pony ponyOnTheStack(std::string color, std::string type, std::string name)
{
	Pony new_born = Pony(color, type, name);
	std::cout << "It's just here on the HayStack !" << std::endl;
	new_born.poop();
	return new_born;
}

Pony *ponyOnTheHeap(std::string color, std::string type, std::string name)
{
	Pony *new_born = new Pony(color, type, name);
	std::cout << "Over your head ! It's making a lHeap of faith !" << std::endl;
	new_born->doMagic();
	return new_born;
}
int main (void)
{
	Pony Amelia = ponyOnTheStack("pink", "unicorn", "Amelia");
	Pony *Rodrigo = ponyOnTheHeap("green", "pegasus", "Rodrigo");

	std::cout 	<< Amelia.getName() << " is a " << Amelia.getColor() 
				<< " " << Amelia.getType() << std::endl;
	std::cout 	<< Rodrigo->getName() << " is a " << Rodrigo->getColor() 
				<< " " << Rodrigo->getType() << std::endl;
	delete Rodrigo;
	return 0;
}