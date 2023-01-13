#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog construcor called" << std::endl;
	type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ) : AAnimal()
{
	std::cout << "Dog copy construcor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destrucor called" << std::endl;
}

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}

Brain *	Dog::getBrain(void) const
{
	return (this->_brain);
}

std::ostream &			operator<<( std::ostream & o, Dog const & rhs )
{
	o << rhs.getType();
	o << rhs.getBrain();
	return o;
}