#include <string>
#include <unistd.h>
#include <iostream>

#include "ImonitorModule.hpp"
#include "username.hpp"
#include "hostname.hpp"

int main()
{
	Imodule *user = new UserName();
	std::cout << user->getVar() << std::endl;
	Imodule *host = new HostName();
	std::cout << host->getVar() << std::endl;

	return 0;
}