#ifndef __ICE_H__
#define __ICE_H__
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	
	public:

		Ice();
		~Ice();
		Ice(Ice const &src);
		Ice &operator=(Ice const &src);
		Ice* clone() const;
		void use(ICharacter& target);
};
	
#endif // __ICE_H__