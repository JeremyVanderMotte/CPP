#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	//Create Materia test
	AMateria *tmp;
	AMateria *tmp1;
	AMateria *tmp2;
	AMateria *tmp3;
	AMateria *tmp4;
	AMateria *tmp5;

	std::cout << std::endl;
	
	std::cout << "=========CREATE MATERIA AND EQUIP=========" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp2 = src->createMateria("fire"); //inexistant Materia
	me->equip(tmp2); //=> try to equip a Materia = 0
	tmp3 = src->createMateria("ice");
	tmp4 = src->createMateria("cure");
	tmp5 = src->createMateria("ice");

	std::cout << std::endl;

	std::cout << "========USE MATERIA=========" << std::endl;
	ICharacter* bob = new Character("Bob");
	me->use(0, *bob); //me use Ice on Bob
	me->use(1, *bob); //me use cure on Bob
	me->use(2, *bob); //inexistant Materia
	me->use(-12, *bob); //wrong index
	me->use(45, *bob); // wrong index;

	std::cout << std::endl;

	std::cout << "========COPY CHARACTER===========" << std::endl;
	Character *smert = new Character("Smert");
	smert->equip(tmp5);
	smert->equip(tmp4);
	Character *smertCopy = new Character(*smert);
	std::cout << "---Use then unequipped the original---" << std::endl;
	smert->use(0, *smertCopy); //use ice on smertCopy
	smertCopy->use(0, *smert); // use ice on smert
	smert->unequip(0);
	smert->use(0, *smertCopy); //Unequipped => No more Materia
	smertCopy->use(0, *smert); // use ice on smert
	
	std::cout << std::endl;
	
	std::cout << "---Use then unequipped the original---" << std::endl;
	
	smert->unequip(1);
	smert->use(1, *smertCopy); //Unequipped => No more Materia
	smertCopy->use(1, *smert); // use ice on smert
	AMateria *tmp6 = src->createMateria("ice");
	smertCopy->equip(tmp6); // 2 = Ice
	smertCopy->equip(tmp3); // 3 = Ice
	smertCopy->use(0, *smert);
	smertCopy->use(1, *smert);
	smertCopy->use(2, *smert);
	smertCopy->use(3, *smert);

	std::cout << std::endl;

	std::cout << "=====TRY UNEQUIP METHOD======" << std::endl;
	AMateria* tmp7 = smertCopy->getMateriaIdx(0);
	smertCopy->unequip(0); //unequip Ice
	delete tmp7;
	smertCopy->unequip(0); //ERROR nothing here
	smertCopy->unequip(-5); //Wrong index;
	smertCopy->unequip(12); //Wrong index;

	std::cout<< "=====DESTRUCTOR TIME======" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete smert;
	delete smertCopy;
	delete tmp5;
	delete tmp4;

	std::cout << "======END OF PROGRAM======" << std::endl;
	return 0;
}