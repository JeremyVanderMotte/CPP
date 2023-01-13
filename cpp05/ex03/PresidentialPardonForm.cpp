#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("default presidential", 25, 5), _target("default")
{
	std::cout << "Default presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential", 25, 5), _target(target)
{
	std::cout << "Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src), _target(src._target)
{
	std::cout << "Presidential copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
	{
		throw Form::FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > this->getGradeExec())
	{
		throw Form::GradeTooLowException();
		return ;
	}
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->_target = rhs._target;
	return (*this);
}
