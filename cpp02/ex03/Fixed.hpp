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
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed operator++(int); // i++
		Fixed & operator++(void); // ++i
		Fixed operator--(int); //i--
		Fixed & operator--(void); //--i
		int	operator<(Fixed const & rhs) const;
		int operator>(Fixed const & rhs) const ;
		int operator<=(Fixed const & rhs) const;
		int operator>=(Fixed const & rhs) const;
		int operator==(Fixed const & rhs) const;
		int operator!=(Fixed const & rhs) const;
		static Fixed & min(Fixed & f1, Fixed & f2);
		static Fixed const & min(Fixed const & f1, Fixed const & f2);
		static Fixed & max(Fixed & f1, Fixed & f2);
		static Fixed const & max(Fixed const & f1, Fixed const & f2);

	private:
		int	_nbr;
		static int const _nbrBits = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */