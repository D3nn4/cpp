#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(42);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	/*
	std::cout << mstack.size() << std::endl;
	std::cout << *mstack.begin() << std::endl;
	std::cout << *mstack.end() << std::endl;
	*/
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::stack<int> asscopy = s;
	std::stack<int> boobcopy;
	boobcopy = s;
	
	return 0;
}