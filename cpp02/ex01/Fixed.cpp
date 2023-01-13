#include "Fixed.hpp"


/*
*https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = n << this->_nbrBits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = (int)(roundf(n * (1 << this->_nbrBits)));
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_nbr = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(int nbr)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = nbr;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nbr / (float)(1 << this->_nbrBits));
}

int		Fixed::toInt(void) const
{
	return (this->_nbr >> this->_nbrBits);
}

std::ostream & operator<<(std::ostream &flux, Fixed const & rhs)
{
	flux << rhs.toFloat();
	return (flux);
}

