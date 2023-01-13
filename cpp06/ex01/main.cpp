#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data dataToSerialize("test");
	uintptr_t dataSerial = serialize(&dataToSerialize);
	Data *dataDeserialized = deserialize(dataSerial);

	std::cout << std::endl;
	std::cout << "adress data1 : " << &dataToSerialize << std::endl;
	std::cout << "adress data2 : " << dataDeserialized << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << "data1 name = " << dataToSerialize.getName() << std::endl;
	std::cout << "data2 name = " << dataDeserialized->getName() << std::endl;
	std::cout << std::endl;

	return (0);
}