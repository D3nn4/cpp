#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MAX_MATERIA 4

class Character : public ICharacter
{
	private:
		Character(){}; // deleted
		std::string _name;
		AMateria ** _array_materia;

	public:
		Character(std::string name);
		~Character();
		Character(Character const &src);
		Character &operator=(Character const &src);


		std::string const & getName() const;
		AMateria ** getArray() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // __CHARACTER_H__