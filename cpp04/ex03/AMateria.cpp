# include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria constructor called" << std::endl;
	this->type = "Default type";
}

AMateria::AMateria(AMateria const & src)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	this->type = src.type;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Default Materia use on " << target.getName() << std::endl;
}


