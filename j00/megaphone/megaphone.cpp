#include <iostream>
#include <locale> 
#include <cstring> 
#include <cctype>

void megaphone (int arg, char **argv)
{
	if (arg < 2){
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return;
	}
	int i = 1;
	std::locale loc;
	while (i < arg) {
	  	std::string str=argv[i];
	  	for (std::string::size_type j=0; j<str.length(); ++j)
	    std::cout << std::toupper(str[j],loc);
		if (i != arg - 1)
			std::cout << " " ;
		++i;	
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	megaphone(argc, argv);
	return 0;
}