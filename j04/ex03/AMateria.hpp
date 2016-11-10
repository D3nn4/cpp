#ifndef __AMATERIA_H__
#define __AMATERIA_H__
#include <string>

#include "ICharacter.hpp"

class AMateria
{
	private:

		unsigned int _xp;
		const std::string _type;

	protected:

		AMateria(){}; //deleted	
			
	public:

		AMateria(std::string const & type);
		~AMateria();
		AMateria(AMateria const &src);
		AMateria &operator=(AMateria const &src);

		void setXP( unsigned int i);
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& );
};
	
#endif // __AMATERIA_H__