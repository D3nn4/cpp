#ifndef __PEON_H__
#define __PEON_H__
#include <string>
#include "Victim.hpp"

class Peon : virtual public Victim
{
	public:

		Peon(std::string name);
		Peon(Peon const &src);
		~Peon();
		Peon &operator=(Peon const &src);

		void getPolymorphed() const;

	protected:

	private:

		Peon(); // deleted
};

std::ostream &operator<<(std::ostream &o, Peon const &peon);

#endif // __PEON_H__