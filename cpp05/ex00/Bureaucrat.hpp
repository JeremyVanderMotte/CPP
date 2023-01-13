#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


# include <stdexcept>
# include <iostream>

class Bureaucrat
{
	private:
		std::string const 	_name;
		int					_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		std::string	const getName(void) const;
		int			getGrade(void) const;
		void		increment(void);
		void		decrement(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

	class BureaucratException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Bureaucrat excepion catch");
			}
	};

	class GradeTooHighException : public Bureaucrat::BureaucratException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high excepion catch");
			}
	};

	class GradeTooLowException : public Bureaucrat::BureaucratException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low exception catch");
			}
	};

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif