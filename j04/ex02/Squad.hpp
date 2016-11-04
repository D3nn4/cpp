#ifndef __SQUAD_H__
#define __SQUAD_H__

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:

	protected:
		int _count;
		ISpaceMarine **_tab_units;
		

	public:
		Squad();
		Squad(Squad const &src);
		~Squad();
		Squad &operator=(Squad const &src);	

		int getCount() const;
		ISpaceMarine** getTab() const;
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine *spaceMarine);
};

std::ostream &operator<<(std::ostream &o, Squad const &squad);

#endif // __SQUAD_H__