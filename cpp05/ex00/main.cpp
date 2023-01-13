#include "Bureaucrat.hpp"

int main (void)
{
	std::cout << "==========NAME PIERRE | GRADE 147==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat pierre("Pierre", 147);
		std::cout << pierre << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "==========NAME Paul | GRADE 1==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat pierre("Paul", 1);
		std::cout << pierre << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "==========NAME Jacques | GRADE 150==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat jacques("Jacques", 150);
		std::cout << jacques << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Paul | GRADE 1==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat paul("Paul", 1);
		std::cout << paul << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Henry | GRADE -12==========" << std::endl;
	std::cout << "====> EXCEPTION GRADE TOO HIGH" << std::endl;
	try
	{
		Bureaucrat henry("Henry", -12);
		std::cout << henry << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Aurore | GRADE 185==========" << std::endl;
	std::cout << "====> EXCEPTION GRADE TOO LOW" << std::endl;
	try
	{
		Bureaucrat aurore("Aurore", 185);
		std::cout << aurore << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Justine | GRADE 20 | INCREMENT==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat justine("Justine", 20);
		std::cout << justine << std::endl;
		justine.increment();
		std::cout << justine << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Sabine | GRADE 38 | DECREMENT==========" << std::endl;
	std::cout << "====> NO EXCEPTION" << std::endl;
	try
	{
		Bureaucrat sabine("Sabine", 38);
		std::cout << sabine << std::endl;
		sabine.decrement();
		std::cout << sabine << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Jean | GRADE 1 | INCREMENT==========" << std::endl;
	std::cout << "====> EXCEPTION GRADE TOO HIGH" << std::endl;
	try
	{
		Bureaucrat jean("Jean", 1);
		std::cout << jean << std::endl;
		jean.increment();
		std::cout << jean << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "==========NAME Alain | GRADE 150 | DECREMENT==========" << std::endl;
	std::cout << "====> EXCEPTION GRADE TOO LOW" << std::endl;
	try
	{
		Bureaucrat alain("Alain", 150);
		std::cout << alain << std::endl;
		alain.decrement();
		std::cout << alain << std::endl;
	}
	catch(Bureaucrat::BureaucratException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}