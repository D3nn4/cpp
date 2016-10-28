#ifndef __FIXED_CLASS__
#define __FIXED_CLASS__
#include <string>



class Fixed
{

	public:

	Fixed();
	~Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);

	int getRawBits() const;
	void setRawBits(int const raw);
	

	private:
		int _fixed_point;
		static const int _fract_bits;
};


#endif // __FIXED_CLASS__