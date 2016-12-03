#include <iostream>
#include <stack>

#include "mutantstack.hpp"


template<typename T>
T *MutantStack<T>::begin() const
{
	return this->top();
}

template<typename T>
T *MutantStack<T>::end() const
{
	T* first = this->top();
	int size = this->size();
	return first + (size - 1); //begin at 0
}

