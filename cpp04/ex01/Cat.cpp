#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat construcor called" << std::endl;
	type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src ) : Animal()
{
	std::cout << "Cat copy construcor called" << std::endl;
	this->type = src.getType();
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destrucor called" << std::endl;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Assignation Cat operator called" << std::endl;
	if ( this != &rhs )
	{
		if (this->_brain)
			delete this->_brain;
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *	Cat::getBrain(void) const
{
	return (this->_brain);
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << i.getType();
	return o;
}