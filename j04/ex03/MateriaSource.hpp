#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__
#include <string>

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:

		AMateria ** _array_materia;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &src);

		AMateria ** getArray() const;
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif // __MATERIASOURCE_H__