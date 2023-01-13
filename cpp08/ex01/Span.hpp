#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		void			addNumber(int const & n);
		int	shortestSpan(void) const;
		int	longestSpan(void) const;
		std::vector<int> getVect(void) const;
		unsigned int	getSize(void) const;
		void			fill(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);

		Span &		operator=( Span const & rhs );

		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span::Excepion : not enough numbers in span");
				}
		};

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span::Excepion : span is full");
				}
		};

	private:
		Span();
		std::vector<int> _vect;
		unsigned int _N;
		unsigned int _size;
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);
#endif