#ifndef __CURE_H__
#define __CURE_H__
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{	
	public:

		Cure();
		~Cure();
		Cure(Cure const &src);
		Cure &operator=(Cure const &src);
		Cure* clone() const;
		void use(ICharacter& target);
};
	
#endif // __CURE_H__