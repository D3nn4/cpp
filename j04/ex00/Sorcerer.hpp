#ifndef __SORCERER_H__
#define __SORCERER_H__
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer();
		Sorcerer &operator=(Sorcerer const &src);

		void introduce() const;
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &victim);
		void polymorph(Peon const &peon);

	protected:

		std::string _name;
		std::string _title;
	
	private:

		Sorcerer(); // deleted
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &sorcerer);

#endif // __SORCERER_H__