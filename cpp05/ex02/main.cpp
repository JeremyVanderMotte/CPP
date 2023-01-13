#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	std::srand(std::time(NULL));
	Bureaucrat				Pierre("Pierre", 1);
	Bureaucrat				Paul("Paul", 142);
	ShrubberyCreationForm	shrubbery("shrub");
	RobotomyRequestForm		robotomy("robotomy");
	PresidentialPardonForm	president("president");
	std::cout << std::endl << std::endl;

	std::cout << "==========SHRUBERRY FORM==========" << std::endl;
	std::cout << std::endl;
	std::cout << "====TRY TO EXECUTE NOT SIGNED FORM====" << std::endl;
	std::cout << "===> EXCEPTION (form not signed)" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(shrubbery);
	shrubbery.beSigned(Pierre);

	std::cout << std::endl;
	std::cout << std::endl << "====TRY TO EXECUTE SIGNED FORM====" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(shrubbery);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "====TRY TO EXEC====" << std::endl;
	std::cout << "===> EXCEPTION (grade too low)" << std::endl;
	std::cout << std::endl;
	Paul.executeForm(shrubbery);
	std::cout << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "==========ROBOTOMY FORM==========" << std::endl;
	std::cout << std::endl;
	std::cout << "====TRY TO EXECUTE NOT SIGNED FORM====" << std::endl;
	std::cout << "===> EXCEPTION (form not signed)" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(robotomy);
	robotomy.beSigned(Pierre);


	std::cout << std::endl << "====TRY TO EXECUTE (50 %) OK====" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(robotomy);
	Pierre.executeForm(robotomy);
	Pierre.executeForm(robotomy);
	Pierre.executeForm(robotomy);
	Pierre.executeForm(robotomy);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "====TRY TO EXEC====" << std::endl;
	std::cout << "===> EXCEPTION (grade too low)" << std::endl;
	std::cout << std::endl;
	Paul.executeForm(robotomy);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "==========PRESIDENTIAL FORM==========" << std::endl;
	std::cout << std::endl;

	std::cout << "====TRY TO EXECUTE NOT SIGNED FORM====" << std::endl;
	std::cout << "===> EXCEPTION (form not signed)" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(president);
	president.beSigned(Pierre);

	std::cout << std::endl;
	std::cout << std::endl << "====TRY TO EXECUTE SIGNED FORM====" << std::endl;
	std::cout << std::endl;
	Pierre.executeForm(president);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "====TRY TO EXEC====" << std::endl;
	std::cout << "===> EXCEPTION (grade too low)" << std::endl;
	std::cout << std::endl;
	Paul.executeForm(president);
	std::cout << std::endl << std::endl;
	return (0);
}