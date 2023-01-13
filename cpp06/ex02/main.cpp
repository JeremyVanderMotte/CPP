#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base * generate(void)
{
	int nbr = rand() % 3;

	switch (nbr)
	{
	case 0:
		std::cout << "A created" << std::endl;
		return (static_cast<Base *>(new A));
		break;
	case 1:
		std::cout << "B created" << std::endl;
		return (static_cast<Base *>(new B));
		break;
	case 2:
	std::cout << "C created" << std::endl;
		return (static_cast<Base *>(new C));
	default:
		std::cout << "Something strange happened with srand" << std::endl;
		return (NULL);
		break;
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "It's a A object" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's a B object" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's a C object" << std::endl;
	else
		std::cout << "Object not known" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "It's a A object" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "It's a B object" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "It's a C object" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	std::cout << "Object not known" << std::endl;
}

int main(void)
{
	std::srand(std::time(NULL));
	Base *class1 = generate();
	Base *class2 = generate();
	Base *class3 = generate();
	Base *class4 = generate();

	identify(class1);
	identify(class2);
	identify(class3);
	identify(class4);

	identify(*class1);
	identify(*class2);
	identify(*class3);
	identify(*class4);

	std::cout << std::endl;

	delete class1;
	delete class2;
	delete class3;
	delete class4;

	return (0);
}