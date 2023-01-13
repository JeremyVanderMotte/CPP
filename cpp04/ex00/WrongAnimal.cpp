#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "WrongAnimal construcor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
		this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Basic WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}