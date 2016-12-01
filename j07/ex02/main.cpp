#include <iostream>
#include "array.hpp"
#include "array.cpp"

int main()
{
	Array<int> intArray(5);
	for (int i = 0; i < 5; ++i) {
		intArray[i] = i;
	}

	std::cout << intArray;

	Array<char> charArray(5);
	char c = 'a';
	for (int i = 0; i < 5; ++i) {
		charArray[i] = c;
		++c;
	}

	std::cout << charArray;
	return 0;
}