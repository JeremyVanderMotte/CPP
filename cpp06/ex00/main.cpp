#include <iostream>
#include "ConvertScalar.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	ConvertScalar convert(argv[1]);
	convert.printConversions();
	return (0);
}