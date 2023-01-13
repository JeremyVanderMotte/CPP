#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point( Point const & src );
		Point(float const x, float const y);
		~Point();

		Fixed getX(void) const;
		Fixed getY(void) const;
		Point &		operator=( Point const & rhs );
		int	operator!=(Point const rhs) const;

	private:
		Fixed const _x;
		Fixed const	_y;
};

std::ostream &			operator<<( std::ostream & o, Point const & i );
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif /* *********************************************************** POINT_H */