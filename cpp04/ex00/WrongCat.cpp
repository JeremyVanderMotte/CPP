#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat construcor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src ) : WrongAnimal()
{
	std::cout << "WrongCat copy construcor called" << std::endl;
	this->type = src.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destrucor called" << std::endl;

}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}