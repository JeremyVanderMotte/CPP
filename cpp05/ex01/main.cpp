#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat smert("Smert", 25);
	Bureaucrat paul("Paul", 95);

	//Constructor form ok
	std::cout << "======CONSTRUCTOR FORM OK======" << std::endl;
	std::cout << "Create form 28B - 30 - 112" << std::endl;
	std::cout << "Create form 35C - 120 - 114" << std::endl;
	try
	{
		Form form1("28B", 30, 12);
		Form form2("35C", 120, 114);
	} 
	catch (Form::FormException & e)
	{
		std::cout << "Problem constructor : " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	//To use to sign in signing test
	std::cout << "======CREATE SAME FORM BUT NOT IN SCOPE TRY CATCH======" << std::endl;
	Form form1("28B", 30, 12);
	Form form2("35C", 120, 114);
	//======================

	//Constrcutor form KO GRADETOOLOW
	std::cout << std::endl;
	std::cout << "======CREATE FORM : 598G - 153 - 15" << std::endl;
	std::cout << "======>GRADE TOO LOW EXCEPTION" << std::endl;
	try
	{
		Form form("598G", 153, 15);
	}
	catch (Form::FormException& e)
	{
		std::cout << "Problem constructor : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "======CREATE FORM : 598G - 120 - 198" << std::endl;
	std::cout << "======>GRADE TOO LOW EXCEPTION" << std::endl;
	try
	{
		Form form("598G", 120, 198);
	}
	catch (Form::FormException & e)
	{
		std::cout << "Problem constructor : " << e.what() << std::endl;
	}

	//Constructor form KO Grade too high
	std::cout << std::endl;
	std::cout << "======CREATE FORM : 598G - -15 - 15" << std::endl;
	std::cout << "======>GRADE TOO HIGH EXCEPTION" << std::endl;
	try
	{
		Form form("598G", -15, 15);
	}
	catch (Form::FormException & e)
	{
		std::cout << "Problem constructor : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "======CREATE FORM : 598G - 59 - 0" << std::endl;
	std::cout << "======>GRADE TOO HIGH EXCEPTION" << std::endl;
	try
	{
		Form form("598G", 59, 0);
	}
	catch (Form::FormException & e)
	{
		std::cout << "Problem constructor : " << e.what() << std::endl;
	}

	//sign Form KO : Grade too low
	std::cout << std::endl;
	std::cout << "======SIGN FORM" << std::endl;
	std::cout << "======>GRADE TOO LOW" << std::endl;
	std::cout << "Form to sign : " << form1 << std::endl;
	paul.signForm(form1);

	//sign form OK
	std::cout << std::endl;
	std::cout << "======SIGN FORM" << std::endl;
	std::cout << "======>OK" << std::endl;
	std::cout << "Form to sign : " << form1 << std::endl;
	smert.signForm(form1);

	//sign form KO : Already signed
	std::cout << std::endl;
	std::cout << "======SIGN FORM" << std::endl;
	std::cout << "======>KO ALREADY SIGNED" << std::endl;
	std::cout << "Form to sign : " << form1 << std::endl;
	smert.signForm(form1);
	return (0);
}