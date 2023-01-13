#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// // main in subject
	// const AAnimal* j = new Dog();
	// const AAnimal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	// system("leaks ex02");

	// // // main asked in subject
	// const int	nbr_animal = 4;
	// AAnimal* animals[4];
	// for (int i = 0; i < nbr_animal / 2; i++)
	// 	animals[i] = new Dog();
	// for (int i = nbr_animal / 2; i < nbr_animal; i++)
	// 	animals[i] = new Cat();
	// for (int i = 0; i < nbr_animal; i++)
	// 	delete animals[i];
	// // system("leaks ex02");
 

	// //Check if deep copy (all brain are copied) Ref copy
	// Cat *c1 = new Cat();
	// Cat *c2 = new Cat(*c1);
	// std::string *ideas = c1->getBrain()->getIdeas();
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ideas[i] << std::endl;
	// ideas = c2->getBrain()->getIdeas();
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ideas[i] << std::endl;
	// delete c1;
	// delete c2;
	// // system("leaks ex02");

	// Cat c3;
	// Cat c4;
	// c4 = c3;
	// std::string *ideas2 = c3.getBrain()->getIdeas();
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ideas2[i] << std::endl;
	// ideas = c4.getBrain()->getIdeas();
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ideas2[i] << std::endl;
 	// system("leaks ex02");

/* ------INTERFACE TEST */
	// AAnimal *a1 = new AAnimal();
	AAnimal *a2 = new Cat();
	delete a2;
/* ------INTERFACE TEST */
	return 0;
}