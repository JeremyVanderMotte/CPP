#include "Harl.hpp"

int main(void)
{
	Harl harl = Harl();
	std::cout << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("no exist");
	return (0);
}