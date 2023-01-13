#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::srand(std::time(0));

	Intern	intern;
	std::cout << std::endl << std::endl;

	std::cout << "CREATE ROBOTOMY FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	Form * robo = intern.makeForm("robotomy", "NotaRobot");
	std::cout << *robo << " created " << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "CREATE PRESIDENTIAL FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	Form * president = intern.makeForm("presidential", "Bush");
	std::cout << *president << " created " << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "CREATE SHRUBBERY FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	Form * shrub = intern.makeForm("shrubbery", "Shruby");
	std::cout << *shrub << " created " << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "CREATE SHRUBBERY FORM" << std::endl;
	std::cout << "==> Intern exception" << std::endl;
	try
	{
		Form * unknown_form = intern.makeForm("unknown", "unkown");
		std::cout << *unknown_form << " was just created " << std::endl << std::endl;
	}
	catch (Intern::InternException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	delete robo;
	delete shrub;
	delete president;
	return (0);
}