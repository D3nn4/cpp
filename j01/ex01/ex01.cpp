#include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere; //Mario was here
}

int main (void)
{
	memoryLeak();
	return 0;
}