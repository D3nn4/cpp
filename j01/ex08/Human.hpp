#ifndef __HUMAN_H__
#define __HUMAN_H__
#include <string>



class Human
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



#endif // __HUMAN_H__