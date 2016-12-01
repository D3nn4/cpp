#include <iostream>
#include <string>

template<typename T >

T min(T &a, T &b) {
	if (a >= b)
		return b;
	return a; 
}


template<typename T,typename U>

std::string min(T &, U&) {
	return "Min impossible, different type.\n";
}
