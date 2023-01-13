#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure contructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure & src ) : AMateria(src)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	this->type = src.type;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &	Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

Cure*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
