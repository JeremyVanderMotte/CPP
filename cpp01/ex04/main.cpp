#include "Perform.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	perform(argv[1], argv[2], argv[3]);
	return (0);
}