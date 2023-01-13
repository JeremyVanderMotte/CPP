#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const ;

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	private:
		ShrubberyCreationForm();
		std::string	_target;
};

#endif