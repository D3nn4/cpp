#include <iostream>
#include <string>

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Using the ptr : " << *ptr << ".\n";
	std::cout << "Using the ref : " << ref << ".\n";

	return 0;
}