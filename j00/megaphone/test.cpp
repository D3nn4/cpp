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
	while (i < arg) {
	  	std::string str=argv[i];
	  	for (int j=0; j<str.length(); ++j) {
			str[j] = std::toupper(str[j]);
		}
		std::cout << str;
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
