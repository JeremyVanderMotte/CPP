#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "Animal dog Dog->getType = " << dog->getType() << std::endl;
	std::cout << "Animal cat Cat->getType = " << cat->getType() << std::endl;
	cat->makeSound(); //Cat sound
	dog->makeSound(); //Dog sound
	animal->makeSound(); //Basic animal sound

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	// Not a cat because virtual isn't use => wrong_cat is WrongAnimal
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound(); // make basic WrongAnimal sound
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	 // => only WrongAnimal destructor because it's a WrongAnimal object
	delete wrong_cat;
	delete wrong_animal;
}