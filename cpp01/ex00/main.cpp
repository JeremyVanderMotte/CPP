#include "Zombie.hpp"

int main(void)
{
	Zombie zomb1 = Zombie("Pierre");
	Zombie *heap = newZombie("Heapster");
	
	zomb1.announce();
	heap->announce();
	randomChump("Random");
	delete heap;
	return (0);
}