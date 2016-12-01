#include <iostream>


template<typename T>
void func(T param){ std::cout << param << std::endl;};

template<typename T>
void iter(T *array, int lenght, void(*f)(T)) {
	if (lenght > 0) {
		for (int i = 0; i < lenght; ++i) {
			f(array[i]);
		}
	}
}