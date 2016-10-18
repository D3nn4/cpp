#ifndef __PONY_H__
#define __PONY_H__
#include <string>

class Pony
{
	public:
		Pony(std::string color, std::string type, std::string name);
		~Pony(void);
		void poop (void) const;
		void doMagic (void) const;
		std::string getColor(void) const;
		std::string getType(void) const;
		std::string getName(void) const;

	private:
		std::string _color;
		std::string _type;
		std::string _name;		
};



#endif // __PONY_H__