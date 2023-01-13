#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	// std::cout << "Ice constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice & src ) : AMateria(src)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	this->type = src.type;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &				Ice::operator=( Ice const & rhs )
{
	// std::cout << "Ice assignation called" << std::endl;
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
