#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
void easyfind (T intcont, int n)
{
	std::vector<int>::const_iterator	current;
	std::vector<int>::const_iterator	end = intcont.end();
	for (current = intcont.begin(); current != end; ++current) {
		if (*current == n) {
			return;
		}
	}
	throw std::exception();
}