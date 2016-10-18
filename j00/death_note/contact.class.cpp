#include "directory.class.hpp"
#include "contact.class.hpp"

contact::Contact(void)
{
	std::out << "constructor called." << std::endl;
	this->_total_contact = 0;
	return;
}

contact::~Contact(void)
{
	std::out << "destructor called." << std::endl;
	return;
}

void contact::addContact(directory dir)
{
	if ( dir.getTotal() >= dir.getMax()){
		std::cout << "stop kidding yourself, you don't have so many contacts" << std::endl;
		return;
	}


	dir.addContact[dir.getTotal()] = contact.

}