#include <iostream>
#include <string>

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

void Human::action(std::string const & action_name, std::string const & target)
{
	Action array_action[] = 
	{
		{"meleeAttack", &Human::meleeAttack},
		{"rangedAttack", &Human::rangedAttack},
		{"intimidatingShout", &Human::intimidatingShout}
	};
	for (int i = 0; i < 3; ++i) {
		if (array_action[i].name.compare(action_name) == 0)
			(this->*(array_action[i].ptrfun))(target);
	}
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << "You draw your sword and attack "<< target << ".\n";
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "You draw your bow and unliesh your arrows on "<< target << ".\n";
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "You yell an intimidating berserker scream and "<< target << "run away.\n";
}