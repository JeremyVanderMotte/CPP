#include "Array.hpp"

int main(void)
{
	//=======INT TAB======
	Array<int> tab6;
	std::cout << "size empty tab = " << tab6.size() << std::endl;
	std::cout << "=======INT TAB======" << std::endl;
	Array<int> tab(4);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	std::cout << tab << std::endl;

	//=======CHAR TAB======
	std::cout << "=======CHAR TAB======" << std::endl;
	Array<char> tab1(4);
	tab1[0] = 'p';
	tab1[1] = 'l';
	tab1[2] = 'o';
	tab1[3] = 'p';
	std::cout << tab1 << std::endl;

	//=======FLOAT TAB======
	std::cout << "=======FLOAT TAB======" << std::endl;
	Array<float> tab2(4);
	tab2[0] = 1.2f;
	tab2[1] = 2.3f;
	tab2[2] = 3.4f;
	tab2[3] = 4.2f;
	std::cout << tab2 << std::endl;

	//=======STRING TAB======
	std::cout << "=======STRING TAB======" << std::endl;
	Array<std::string> tab3(3);
	tab3[0] = "COUCOU";
	tab3[1] = "A";
	tab3[2] = "TOI!";
	std::cout << tab3 << std::endl;

	//ERROR MANAGMENT
	std::cout << "=======ERROR MANAGMENT======" << std::endl;
	try
	{
		tab[25] = 4;
		std::cout << "Why are you here ?!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Nice try little vicious but ..." << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		tab[25] = -15;
		std::cout << "Why are you here ?!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Nice try little vicious but ..." << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Array<int> patate;
		patate[0];
		std::cout << "Why are you here ?!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Nice try little vicious but ..." << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "======ASSIGNATION TEST======" << std::endl;
	Array<int> patate(2);
	patate[0] = 5;
	patate[1] = 48;
	std::cout << patate << std::endl;
	patate = tab;
	std::cout << patate << std::endl;
	return (0);
}