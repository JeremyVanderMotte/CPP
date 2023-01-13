#include "include.h"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string input;
	PhoneBook repertoire;

	std::cout << "Enter command (ADD|SEARCH|EXIT) : ";
	while (std::getline(std::cin, input))
	{
		if (!input.compare("EXIT"))
			return (0);
		else if (!input.compare("ADD"))
			repertoire.addContact();
		else if (!input.compare("SEARCH"))
			repertoire.searchContact();
		std::cout << std::endl;
		if (std::cin.eof())
			return (0);
		std::cout << "Enter command (ADD|SEARCH|EXIT) : ";
	}
	return (0);
}