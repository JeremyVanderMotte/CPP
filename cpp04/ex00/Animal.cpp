#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Animal construcor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = src.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
		this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}

void	Animal::makeSound(void) const
{
	std::cout << "Basic animal sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}