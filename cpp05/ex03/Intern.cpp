#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

static Form * robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form * shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form * presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::makeForm(std::string formName, std::string target)
{
	Form *(*fct[3])(std::string target) = {robotomy, shrubbery, presidential};
	std::string form[3] = {"robotomy", "shrubbery", "presidential"};
	Form * ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (!formName.compare(form[i]))
			ret = fct[i](target);
	}
	if (!ret)
	{
		throw InternException();
		return ret;
	}
	std::cout << "Intern creates " << *ret << std::endl;
	return (ret);
}

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}
