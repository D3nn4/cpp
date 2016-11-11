#ifndef __PRESIDENTIAL_H__
#define __PRESIDENTIAL_H__
#include <string>

#include "Form.hpp"

class Bureaucrate;

class PresidentialPardonForm : public Form
{
	private:

		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &src);	

		virtual void beExecute(Bureaucrate *bureaucrate) const;
		std::string getTarget() const;

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &presidential);

#endif // __PRESIDENTIAL_H__