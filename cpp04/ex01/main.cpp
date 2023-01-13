#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
/* ------- MAIN IN SUBJECT
	// main in subject
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// system("leaks ex01");
 ------- MAIN IN SUBJECT*/

	// // main asked in subject
	const int	nbr_animal = 4;
	Animal* animals[4];
	for (int i = 0; i < nbr_animal / 2; i++)
		animals[i] = new Dog();
	for (int i = nbr_animal / 2; i < nbr_animal; i++)
		animals[i] = new Cat();
	for (int i = 0; i < nbr_animal; i++)
		delete animals[i];
	// system("leaks ex01");

/*
	//Check if deep copy (all brain are copied) Ref copy
	Cat *c1 = new Cat();
	Cat *c2 = new Cat(*c1);
	std::string *ideas = c1->getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
	ideas = c2->getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
	delete c1;
	delete c2;
*/
/*
	Cat c3;
	Cat c4;
	c4 = c3;
	std::string *ideas = c3.getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
	ideas = c4.getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
 	system("leaks ex01");*/
	return 0;
}