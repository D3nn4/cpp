#include <iostream>

template<typename T >

void swap(T &a, T &b) {
	std::cout << "Toto.\n";
	T temp = b;
	b = a;
	a = temp;
}