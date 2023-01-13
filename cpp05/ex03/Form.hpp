#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeSign;
		int const			_gradeExec;

	public:
		Form();
		Form(std::string name, int const gradeSign, int const gradeExec);
		Form(Form const & src);
		virtual ~Form();

		std::string const	getName(void) const;
		bool				getIsSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		void				beSigned(Bureaucrat& b);

		virtual void		execute(Bureaucrat const & executor) const = 0;
		Form &	operator=(Form const & rhs);

	class FormException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form exception caught");
			}
	};
	
	class GradeTooHighException : public Form::FormException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high exception caught");
			}
	};

	class GradeTooLowException : public Form::FormException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low exception caught");
			}
	};

	class FormNotSignedException : public Form::FormException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form not signed exception caught");
			}
	};
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif