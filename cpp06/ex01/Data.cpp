#include "Data.hpp"


Data::Data() : _name("Default")
{
	std::cout << "Default contructor called" << std::endl;
}

Data::Data(std::string name) : _name(name)
{
	std::cout << "Contructor called" << std::endl;
}

Data::Data( const Data & src ) : _name(src._name)
{
	std::cout << "Constructor copy called" << std::endl;
}

Data::~Data()
{
	std::cout << "Destructor copy called" << std::endl;
}

std::string Data::getName(void) const
{
	return (this->_name);
}

Data &				Data::operator=( Data const & rhs )
{
	this->_name = rhs._name;
	return (*this);
}
