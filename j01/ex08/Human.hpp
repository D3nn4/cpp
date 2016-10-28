#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <string>



class Character
{
	private:

	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

	public:

	Human();
	~Human();
	void action(std::string const & action_name, std::string const & target);	
};

struct Action
{
	std::string const & name;
	void (Human::*ptrfun)(std::string const & action_name);
};



#endif // __CHARACTER_H__