#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point(): _x(0), _y(0)
{
}

Point::Point( const Point & src ): _x(src.getX()), _y(src.getY())
{
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

int	Point::operator!=(Point const rhs) const
{
	if (this->getX() == rhs.getX()
		&& this->getY() == rhs.getY())
		return (1);
	return (0);
}

Point &				Point::operator=( Point const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & rhs )
{
	o << "x = " << rhs.getX().toFloat() << " y = " << rhs.getY().toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
/* ************************************************************************** */