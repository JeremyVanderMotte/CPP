#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Form *makeForm(std::string formName, std::string target);

		Intern &		operator=( Intern const & rhs );

		class InternException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Intern exception caught");
			}
	};

	private:

};

#endif