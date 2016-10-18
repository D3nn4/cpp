#ifndef __DIRECTORY_CLASS__
#define __DIRECTORY_CLASS__
#include "contact.class.hpp"
#define MAX_CONTACT 2
class Directory
{
	public:
		Directory(void);
		~Directory(void);

		int getTotal(void) const; 
		int getMax(void) const;
		int addTotal(void);
		void addContact(void);
		//bool displayContact(void);
	
	private:
		int _total_contact; 
		const int _max_contact;
		Contact _array_contact[MAX_CONTACT];


};

#endif // __DIRECTORY_CLASS__