#include <iostream>

void toto (int &nb)
{
	++nb;
}

int main ()
{
	int i = 0;
	std::cout << i << std::endl;
	toto(i);
	std::cout << i << std::endl;
	return 0;
}