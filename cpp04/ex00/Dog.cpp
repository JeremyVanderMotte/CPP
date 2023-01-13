#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog construcor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal()
{
	std::cout << "Dog copy construcor called" << std::endl;
	this->type = src.type;
}

Dog::~Dog()
{
	std::cout << "Dog destrucor called" << std::endl;

}

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Dog const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}
