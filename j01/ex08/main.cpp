#include <iostream>
#include <string>

#include "Human.hpp"

int main()
{
	Human you;
	you.action("meleeAttack", "Stephane");
	you.action("rangedAttack", "Stephane");
	you.action("intimidatingShout", "Stephane");

	return 0;
}