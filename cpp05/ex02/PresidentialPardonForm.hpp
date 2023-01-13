#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		PresidentialPardonForm();
		std::string _target;
};

#endif