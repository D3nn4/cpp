#include <sstream>
#include <string> 

#include "basic_func.hpp"

int str_to_int(std::string str)
{
	int i;
	std::istringstream (str) >> i;
	return i;
}

std::string int_to_str(int i)
{
	std::string ascii;
	std::ostringstream temp;
	temp << i;
	ascii = temp.str();
	return ascii;
}