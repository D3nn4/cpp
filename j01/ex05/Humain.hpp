#ifndef __HUMAIN_H__
#define __HUMAIN_H__
#include <string>

#include "Brain.hpp"


class Humain
{
	public:
		Humain(void);
		~Humain(void);
		std::string identify(void) const;
		const Brain &getBrain() const;

	private:
		const Brain _brain ;
				
};



#endif // __HUMAIN_H__