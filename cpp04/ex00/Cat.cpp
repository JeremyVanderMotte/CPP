#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat construcor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const & src ) : Animal()
{
	std::cout << "Cat copy construcor called" << std::endl;
	this->type = src.getType();
}

Cat::~Cat()
{
	std::cout << "Cat destrucor called" << std::endl;

}

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Cat const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
