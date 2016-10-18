#include <iostream>

#include "death_note.hpp"
#include "directory.class.hpp"
#include "contact.class.hpp"
bool applyCmd(std::string cmd, Directory *dir)
{
	if(cmd.compare("EXIT") == 0)
		return false;
	else if (cmd.compare("ADD") == 0)
		dir->addContact();
	else if (cmd.compare("SEARCH") == 0)
		dir->displayDirectory();
	else
		std::cout << "No command " << cmd << ", Try EXIT, ADD or SEARCH." << std::endl;
	return true;
}

void deathNote(void)
{
	Directory dir;
	bool status = true;
	while (status)
	{
		std::string cmd;
		std::cout << "Enter your command : ";
		std::getline(std::cin, cmd);
		status = applyCmd(cmd, &dir);
	}
	return;
}
