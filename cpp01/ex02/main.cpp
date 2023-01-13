#include <iostream>

int main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string &stringREF = text;

	std::cout << "Memory adress string : " << &text << std::endl;
	std::cout << "Memory adress ptr    : " << stringPTR << std::endl;
	std::cout << "Memory adress ref    : " << &stringREF << std::endl;
	
	std::cout << "Value of string : " << text << std::endl;
	std::cout << "Value of ptr    : " << *stringPTR << std::endl;
	std::cout << "Value of ref    : " << stringREF << std::endl;
	return (0);
}