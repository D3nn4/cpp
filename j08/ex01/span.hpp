#ifndef __SPAN_H__
#define __SPAN_H__
#include <vector>
#include <iostream>

class Span
{
	private:
		std::vector<int>  array;
		unsigned int _sizeMax;

		Span();//deleted

	public:
		Span(unsigned int n);
		//Span(Span const &src);
		~Span(){}
		//Span &operator=(Span const &src);	

		void addNumber(int n);
		int shortestSpan() const;
		int longestSpan() const;
};

//std::ostream &operator<<(std::ostream &o, Span const &span);

#endif // __SPAN_H__