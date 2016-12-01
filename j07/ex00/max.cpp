#include <iostream>
#include <string>

template<typename T >

T max(T &a, T &b) {
	if (a <= b)
		return b;
	return a; 
}


template<typename T,typename U >

std::string max(T &, U&) {
	return "Max impossible, different type.\n";
}
