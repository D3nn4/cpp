#ifndef __ARRAY_T__
#define __ARRAY_T__


#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		int _size;

	public:

		Array();	
		Array(const unsigned int n);
		Array(Array const &src);
		Array &operator=(Array const &src);
		T &operator[](const int index);
		~Array(){};

		T *getArray() const;
		int getSize()const;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &array);

#endif // __ARRAY_T__