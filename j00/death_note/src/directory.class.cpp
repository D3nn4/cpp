#include <iostream>

#include "directory.class.hpp"
#include "contact.class.hpp"

Directory::Directory(void)
	: _total_contact(0),
	_max_contact(MAX_CONTACT){}

Directory::~Directory(void){}

int Directory::getTotal(void) const
{
	return _total_contact;
}

int Directory::getMax(void) const
{
	return _max_contact;
}

int Directory::addTotal(void)
{
	return _total_contact += 1;	
}

void Directory::addContact(void)
{
	if ( _total_contact >= _max_contact){
		std::cout << "stop kidding yourself, you don't have so many contacts" << std::endl;
		return;
	}
	int index = _total_contact; //nouveau contact index == total avant add
	for (int i = 0; i < TOTAL_INFOS; i++) {
		std::string info;
		std::cout 	<< "Enter " << _array_contact[index].getKey(i) << " : ";
		std::getline(std::cin,info);
		_array_contact[index].setInfos(info, i);
	}
	_total_contact = addTotal();
	return;
}