#ifndef __DIRECTORY_CLASS__
#define __DIRECTORY_CLASS__
#include "contact.class.hpp"
#define MAX_CONTACT 8
class Directory
{
	public:
		Directory(void);
		~Directory(void);

		int addTotal(void);
		void addContact(void);
		void getContact(void) const;
		void displayDirectory(void) const;

	
	private:
		int _total_contact; 
		const int _max_contact;
		Contact _array_contact[MAX_CONTACT];
		void _displayContact(int i) const;


};

#endif // __DIRECTORY_CLASS__