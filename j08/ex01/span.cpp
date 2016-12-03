#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

#include "span.hpp"

Span::Span(unsigned int n)
	:_sizeMax(n) {}

void Span::addNumber(int n)
{
	if (array.size() >= _sizeMax) {
		throw std::exception();
	}
	array.push_back(n);
}

int Span::shortestSpan() const
{
	if(array.size() <= 1) {
		throw std::exception();
	}
	return 0;
}

int Span::longestSpan() const
{
	if(array.size() <= 1) {
		throw std::exception();
	}
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	return (max - min);
}