#include <string>
#include <iostream>

#include "Fixed.class.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed()
	:_fixed_point(0)
{
	std::cout << "Default constructor called.\n";
};

Fixed::~Fixed()
{
	std::cout << "Default destructor called.\n";
};

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called.\n";
	*this = src;
};

int Fixed::getRawBits() const
{
	std::cout << "getRawBits function called.\n";
	return _fixed_point;
};

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called.\n";
	_fixed_point = raw;
};

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "assignation operator called.\n";
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
}