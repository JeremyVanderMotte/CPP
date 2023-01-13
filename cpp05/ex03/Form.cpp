#include "Form.hpp"

Form::Form() : _name("Default name"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Default constructor form called" << std::endl;
}

Form::Form(std::string name, int const gradeSign, int const gradeExec) :
	_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	else
	{
		this->_isSigned = false;
		std::cout << "Form constructor called" << std::endl;
	}
}

Form::Form(Form const & rhs) : 
	_name(rhs._name), _isSigned(rhs._isSigned), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void				Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
	{
		this->_isSigned = true;
		std::cout << "Form signed by " << b.getName() << std::endl;
	}
}

Form &	Form::operator=(Form const & rhs)
{
	this->_isSigned = rhs._isSigned;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << "Name = " << rhs.getName() << " | isSigned = " << rhs.getIsSigned()
		<< " | gradeSign = " << rhs.getGradeSign() << " | gradeExec = " << rhs.getGradeExec();
	return (o);
}
