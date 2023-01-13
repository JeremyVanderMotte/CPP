#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed( Fixed const & src );
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)	const;

		Fixed &	operator=( Fixed const & rhs );

	private:
		int	_nbr;
		static int const _nbrBits = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */