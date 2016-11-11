#ifndef __FORM_H__
#define __FORM_H__
#include <string>


class Bureaucrate;

class Form
{
	private:

		const std::string  _name;
		bool _isSigned;
		int _SignGrade;
		int _execGrade;

	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &src);
		virtual ~Form();
		Form &operator=(Form const &src);	

		int getGradeMax() const;
		int getGradeMin() const;
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void applySignGrade(int grade);
		void applyExecGrade(int grade);
		void beSigned(Bureaucrate *bureaucrate);
		virtual void beExecute(Bureaucrate *bureaucrate) const;

		class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too High.\n");
			}
	};

		class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too Low.\n");
			}
	};

		class NotSignException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Cannot be executed without being signed first.\n");
			}
	};
};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif // __FORM_H__