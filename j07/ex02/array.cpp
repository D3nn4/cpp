#include <iostream>
#include <exception>

#include "array.hpp"

template <typename T>
Array<T>::Array()
 :_size(0)
{
	_array = new T();
}

template <typename T>
Array<T>::Array(const unsigned int n)
	:_size(n)
{
	_array = new T[n];
}

template <typename T>
Array<T>::Array(Array const &src)
{
	_size = src.getSize();
	if(_size == 0) {
		_array = new T();
		return;
	}
	_array = new T[_size];
	T *srcarray = src.getArray();
	for (int i = 0; i < _size; ++i) {
		_array[i] = srcarray[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
	_size = src.getSize();
	if(_size == 0) {
		_array = new T();
		return;
	}
	_array = new T[_size];
	T *srcarray = src.getArray();
	for (int i = 0; i < _size; ++i) {
		_array[i] = srcarray[i];
	}
	return this;
}

template <typename T>
T *Array<T>::operator[](const int index)
{
	if (0 > index || index >= _size) {
		throw std::exception();
	}
	return _array[index];
}

template <typename T>
int Array<T>::getSize() const
{
	return _size;
}

template <typename T>
T* Array<T>::getArray() const
{
	return _array;
}

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &array)
{
	if (array.getSize() < 0) {
		o << "Array empty.\n";
	}
	else {
		for (int i = 0; i < array.getSize(); ++i) {
			o << array[i];
		}
	}
	return o;
}