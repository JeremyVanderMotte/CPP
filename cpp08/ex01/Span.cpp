#include "Span.hpp"

Span::Span() : _N(0), _size(0)
{
}

Span::Span( const Span & src ) :  _vect(src._vect), _N(src._N), _size(src._size)
{
}


Span::Span(unsigned int n) : _N(n), _size(0)
{
}

Span::~Span()
{
	this->_vect.clear();
}

Span &				Span::operator=( Span const & rhs )
{
	this->_vect.clear();
	this->_N = rhs._N;
	this->_size = rhs._size;
	this->_vect = rhs._vect;
	return (*this);
}

void	Span::addNumber(int const & n)
{
	if (this->_size == this->_N)
	{
		throw (Span::SpanFullException());
		return ;
	}
	this->_vect.push_back(n);
	this->_size++;
}

void	Span::fill(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	while (begin < end)
	{
		addNumber(*begin);
		begin++;
	}
}

int	Span::longestSpan(void) const
{
	if (this->_size == 0 || this->_size == 1)
		throw (Span::NotEnoughNumbersException());
	else
	{
		int min = *std::min_element(this->_vect.begin(), this->_vect.end());
		int max = *std::max_element(this->_vect.begin(), this->_vect.end());
		return (max - min);
	}
}

int	Span::shortestSpan(void) const
{
	if (this->_size == 0 || this->_size == 1)
		throw (Span::NotEnoughNumbersException());
	std::vector<int> vectCopy = this->_vect;
	std::sort(vectCopy.begin(), vectCopy.end());
	int minSpan = *(std::max_element(vectCopy.begin(), vectCopy.end()))
		- (*std::min_element(vectCopy.begin(), vectCopy.end()));
	for (unsigned int i = 0; i < this->_size - 1; i++)
	{
		if (std::abs(vectCopy[i] - vectCopy[i + 1]) < minSpan)
			minSpan = std::abs(vectCopy[i] - vectCopy[i + 1]);
	}
	return (minSpan);
}

std::vector<int> Span::getVect(void) const
{
	return (this->_vect);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);
}

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	o << "Span = ";
	for(unsigned int i = 0; i < rhs.getSize(); i++)
		o << rhs.getVect()[i] << "; ";
	o << "\n";
	return (o);
}