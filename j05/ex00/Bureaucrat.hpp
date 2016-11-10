#ifndef __BUREAUCRATE_H__
#define __BUREAUCRATE_H__
#include <string>
#include <stdexcept>


class Bureaucrate
{
	private:

	protected:

		const std::string  _name;
		int _grade;

	public:
		Bureaucrate(std::string name, int grade);
		Bureaucrate(Bureaucrate const &src);
		~Bureaucrate();
		Bureaucrate &operator=(Bureaucrate const &src);	

		int getGradeMax() const;
		int getGradeMin() const;
		int getGrade() const;
		std::string getName() const;
		void incrGrade();
		void decrGrade();
		void applyGrade(int grade);

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
};



std::ostream &operator<<(std::ostream &o, Bureaucrate const &bureaucrate);

#endif // __BUREAUCRATE_H__