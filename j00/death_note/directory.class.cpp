#include "directory.class.hpp"
//#include "contact.class.hpp"

Directory::Directory(void)
{
	std::out << "constructor called." << std::endl;
	//this->_total_contact = 0;
	return;
}

Directory::~Directory(void)
{
	std::out << "destructor called." << std::endl;
	return;
}
/*
int directory::getTotal(void)
{
	return this->_total_contact;
}

int directory::getMax(void)
{
	return this->_max_contact;
}

void directory::addTotal(void)
{
	++this->_total_contact;
	return;
}

void directory::addContact(contact to_add)
{
	this->_array_contact[_total_contact -1] = to_add;
	return;
}*/