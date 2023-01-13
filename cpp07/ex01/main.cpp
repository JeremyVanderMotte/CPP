#include "iter.hpp"

#include <iostream>


int main(void)
{
	int tab1[4] = {80,76,79,80};
	float tab2[4] = {1.2f, 3.4f, 4.2f, 0.0f};
	std::string tab3[4] = {"LOL", "LUL", "LIL", "LAL"};
	bool tab4[3] = {true, false, false};

	iter(tab1, 4, display);
	iter(tab2, 4, display);
	iter(tab3, 4, display);
	iter(tab4, 3, display);
	
	return (0);
}