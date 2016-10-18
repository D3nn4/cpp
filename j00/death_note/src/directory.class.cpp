#include <iostream>
#include <string>

#include "directory.class.hpp"
#include "contact.class.hpp"
#include "basic_func.hpp"

Directory::Directory(void)
	: _total_contact(0),
	_max_contact(MAX_CONTACT){}

Directory::~Directory(void){}

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
		std::string info = "";
		while (info.compare("") == 0){
			std::cout 	<< "Enter " << _array_contact[index].getKey(i) << " : ";
			std::getline(std::cin,info);
		}
		_array_contact[index].setInfos(info, i);
	}
	_total_contact = addTotal();
	std::cout << "New contact added" << std::endl;
	return;
}

void Directory::displayDirectory(void) const
{
	if (_total_contact > 0) {
		int widht = 3; // display only first name, last name and nickname;
		for (int i = 0; i < _total_contact; ++i) {
			std::string index = int_to_str(i);
			index.resize(10, ' ');
			std::cout << index;
			for (int j = 0; j < widht; ++j) {
				std::string to_display = _array_contact[i].getInfos(j);
				if (to_display.size() > 9){
					to_display.resize(9);
					to_display.resize(10, '.');
				}
				else
					to_display.resize(10, ' ');
				std::cout << "|" << to_display;
			}
			std::cout << std::endl;
		}
		std::string cmd;
		while (true) {
			int index_contact;
			std::cout << "Enter a valid index of a contact or EXIT to go back : ";
			std::getline(std::cin, cmd);
			if (cmd.compare("EXIT") == 0)
				return;
			index_contact = str_to_int(cmd);
			if ( 0 <= index_contact && index_contact < _total_contact)				
				_displayContact(index_contact);	
		}
	}
	else
		std::cout << "try to ADD a contact first" << std::endl;
}

void Directory::_displayContact(int i) const
{
	Contact to_display = _array_contact[i];
	for (int index; index < TOTAL_INFOS; ++index){
		std::cout 	<< to_display.getKey(index) << " : "
					<< to_display.getInfos(index) << std::endl;
	}
}