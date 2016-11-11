#ifndef __INTERN_H__
#define __INTERN_H__
#include <string>

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(Intern const &src);	

		Form *makeForm(std::string name, std::string target);

};

std::ostream &operator<<(std::ostream &o, Intern const &inter);

#endif // __INTERN_H__