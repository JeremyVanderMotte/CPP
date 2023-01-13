#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		std::stringstream sstream;
		sstream << i;
		this->_ideas[i] = "Bad idea nb " + sstream.str();
	}
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i] + " [not mine]";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	delete [] this->_ideas;
}

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string	*Brain::getIdeas(void) const
{
	return (this->_ideas);
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	std::string *tmp;
	tmp = i.getIdeas();

	o << "Ideas : \n";
	// for (int i = 0; i < 100; i++)
	// 	o << tmp[i];
	return o;
}
