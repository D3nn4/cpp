#ifndef __HEADER_H__
#define __HEADER_H__
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	class iterator {
		MutantStack	&rhs;
		size_t		i;

		iterator	&operator=(iterator const &rhs);
		iterator();
		public:
		iterator(iterator const &rhs) : rhs(rhs.rhs), i(rhs.i)
		{
		}
		iterator(MutantStack &st, size_t i) : rhs(st), i(i)
		{
		}
		~iterator()
		{
		}
		iterator	&operator++() { if (i < rhs.size()) i++; return (*this);}
		iterator	&operator--() { if (i > 0) i--; return (*this);}
		bool		operator==(iterator const &rhs) { return (i == rhs.i); }
		bool		operator!=(iterator const &rhs) { return (i != rhs.i); }
		T			&operator*() { return rhs.c[i]; }
	};

	iterator	begin()
	{
		return (iterator(*this, 0));
	}

	iterator	end()
	{
		return (iterator(*this, this->size()));
	}
};

//std::ostream &operator<<(std::ostream &o, CLASS const &class);

#endif // __HEADER_H__