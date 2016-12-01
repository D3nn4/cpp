#include <iostream>
#include <vector>
#include <stdexcept>

#include "easyfind.hpp"

int main()
{
	int numarray[] = {1, 4, 4, 7, 8, 3, 5, 9, 6};
	int n = 2;
	std::vector<int> numbers(numarray, numarray + 9);
	try
	{
		easyfind(numbers, n);
		std::cout << n << " found.\n";
	}
	catch (std::exception e)
	{
		std::cout << "No " << n << " found in array.\n";
	}
	
	


	return 0;
}