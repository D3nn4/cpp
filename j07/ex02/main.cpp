#include <iostream>
#include "array.hpp"
#include "array.cpp"

int main()
{
	Array<int> newArray(5);
	for (int i = 0; i < 5; ++i) {
		newArray[i] = i;
	}

	std::cout << newArray << std::endl;

	return 0;
}