# include "easyfind.hpp"
# include <list>
# include <vector>

void	affInt(int i)
{
	std::cout << i << " ";
}

int main(void)
{
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	std::cout << "=====LIST TEST======" << std::endl;
	std::cout << "list : " << std::endl;
	std::for_each(lst.begin(), lst.end(), affInt);
	std::cout << std::endl;

	std::cout << "======NOT IN LIST======" << std::endl;
	std::cout << "=====> try to find 9 in list" << std::endl;
	try
	{
		easyfind(lst, 9);
	}
	catch (std::out_of_range & e)
	{
		std::cout << "Number not in list" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "======IN LIST======" << std::endl;
	std::cout << "====> try to find 2 in list" << std::endl;
	try
	{
		int i = easyfind(lst, 2);
		std::cout << i << " is in the list" << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cout << "Number not in list" << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::vector<int> vect;
	vect.push_back(7);
	vect.push_back(8);
	vect.push_back(9);
	vect.push_back(10);
	std::cout << "=====VECTOR TEST======" << std::endl;
	std::cout << "vector : " << std::endl;
	std::for_each(vect.begin(), vect.end(), affInt);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "======NOT IN VECTOR======" << std::endl;
	std::cout << "====> try to find -15 in vector" << std::endl;
	try
	{
		easyfind(vect, -15);
	}
	catch (std::out_of_range & e)
	{
		std::cout << "Number not in vector" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "======IN VECTOR======" << std::endl;
	std::cout << "====> try to find 8 in vector" << std::endl;
	try
	{
		int i = easyfind(vect, 8);
		std::cout << i << " is in the vector" << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cout << "Number not in vector" << std::endl;
	}
	return (0);
}