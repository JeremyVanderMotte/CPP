#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("Default robotomy", 72, 45), _target("default")
{
	std::cout << "Default Robotomy constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy", 72, 45), _target(target)
{
	std::cout << "Robotomy constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src), _target(src._target)
{
	std::cout << "Robotomy copy constructor call" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor call" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int n;

	if (!this->getIsSigned())
	{
		throw Form::FormNotSignedException();
		return ;
	}
	if (this->getGradeExec() < executor.getGrade())
	{
		throw Form::GradeTooLowException();
		return ;
	}
	std::cout << "* drill sounds... *" << std::endl;
	n = std::rand() % 2;
	if (n == 0)
		std::cout << this->_target << " has been robotomized..." << std::endl;
	else
		std::cout << "Failed to robotomized " << this->_target << std::endl;
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->_target = rhs._target;
	return (*this);
}
