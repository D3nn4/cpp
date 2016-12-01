#include <string>
#include "iter.cpp"

int main()
{

	std::string strarray[] = {"hello", "world", "!"};
	int intarray[] = {9, 8, 7, 6, 5, 4};

	iter(strarray, 3, &func);
	iter(intarray, 6, &func);

	return 0;
}