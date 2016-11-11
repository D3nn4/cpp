#ifndef __ROBOTOMY_H__
#define __ROBOTOMY_H__
#include <string>

#include "Form.hpp"

class Bureaucrate;

class RobotomyRequestForm : public Form
{
	private:

		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);	

		virtual void beExecute(Bureaucrate *bureaucrate) const;
		std::string getTarget() const;

};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &robotomy);

#endif // __ROBOTOMY_H__