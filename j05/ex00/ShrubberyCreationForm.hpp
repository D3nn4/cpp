#ifndef __SHRUBBERY_H__
#define __SHRUBBERY_H__
#include <string>

#include "Form.hpp"

class Bureaucrate;

class ShrubberyCreationForm : public Form
{
	private:

		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);	

		virtual void beExecute(Bureaucrate *bureaucrate) const;
		std::string getTarget() const;

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &shrubbery);

#endif // __SHRUBBERY_H__