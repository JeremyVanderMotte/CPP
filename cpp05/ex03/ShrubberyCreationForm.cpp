#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default shrubbery", 145,137), _target("default")
{
	std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", 145,137), _target(target)
{
	std::cout << "Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target)
{
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string fileName = this->_target + "_shrubbery";
	std::string tree = 
	"               ,@@@@@@@,\n"
    "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
  	"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
	"       |o|        | |         | |\n"
    "       |.|        | |         | |\n"
 	"  	\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
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
	std::ofstream ofs (fileName.c_str(), std::ofstream::out);
	if (!ofs.is_open())
	{
		std::cout << "Error: can't open file" << std::endl;
		return ;
	}
	ofs << tree;
	ofs.close();
}