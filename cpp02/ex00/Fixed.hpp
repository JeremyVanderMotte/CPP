#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );

	private:
		int	_nbr;
		static int const _nbrBits = 8;
};

#endif