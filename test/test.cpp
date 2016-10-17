#include <iostream>

int main(void)
{
	char buff[1024];

	std::cout << "Hello World !" << std::endl;

	std::cout << "Input a Word : ";
	std::cin >> buff;
	std::cout << "You entered : [" << buff << "]" << std::endl;

	return 0;


}