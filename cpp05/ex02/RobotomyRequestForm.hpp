#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		RobotomyRequestForm();
		std::string _target;
};

#endif