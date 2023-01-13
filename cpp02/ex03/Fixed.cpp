#include "Fixed.hpp"


/*
*https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
*/

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_nbr = n << this->_nbrBits;
}

Fixed::Fixed(float n)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_nbr = (int)roundf(n * (1 << this->_nbrBits));
}

Fixed::Fixed( const Fixed & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_nbr = rhs.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & rhs) const 
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const 
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const 
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs) const 
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_nbr += 1;
	return (tmp);
}

Fixed & Fixed::operator++(void)
{
	this->_nbr += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_nbr -= 1;
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_nbr -= 1;
	return (*this);
}

int	Fixed::operator<(Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>(Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
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
	return ((float)this->_nbr / (1 << this->_nbrBits));
}

int		Fixed::toInt(void) const
{
	return (this->_nbr >> this->_nbrBits);
}

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

std::ostream & operator<<(std::ostream &flux, Fixed const & rhs)
{
	flux << rhs.toFloat();
	return (flux);
}

