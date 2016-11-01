#ifndef __VICTIM_H__
#define __VICTIM_H__
#include <string>

class Victim
{
	public:

		Victim(std::string name);
		Victim(Victim const &src);
		~Victim();
		Victim &operator=(Victim const &src);

		void introduce() const;
		std::string getName() const;
		void getPolymorphed() const;
		
	protected:

		Victim(){};
		std::string _name;
};

std::ostream &operator<<(std::ostream &o, Victim const &sorcerer);

#endif // __VICTIM_H__