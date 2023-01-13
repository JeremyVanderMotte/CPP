#include "AAnimal.hpp"

AAnimal::AAnimal() : type("default")
{
	std::cout << "AAnimal construcor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->type = src.type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}


AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "Assignation AAnimal called" << std::endl;
	if ( this != &rhs )
		this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & rhs )
{
	o << rhs.getType();
	return o;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Basic AAnimal sound" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}