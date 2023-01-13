
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string s1 = "Pierre";
	std::string s2 = "Paul";
	std::string s3 = "Smert";

	ClapTrap c1(s1);
	ScavTrap scav3(s3);
	// ScavTrap scav4(scav3);
	// ScavTrap scav5;
	// scav5 = scav3;

	std::cout << std::endl;
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	// std::cout << scav4 << std::endl;	
	// std::cout << scav5 << std::endl;

	std::cout << "==============" <<std::endl;
	c1.attack("Paul");
	// c2.attack("Pierre");
	scav3.attack("Paul");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	// c2.takeDamage(8);
	scav3.takeDamage(50);
	std::cout << c1 << std::endl;
	// std::cout << c2 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	scav3.beRepaired(50);
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	scav3.takeDamage(0);	
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	scav3.guardGate();
	// scav3.attack("Paul");     ---Remplacer Energy Point par 0
	// scav3.beRepaired(5);
	scav3.takeDamage(100);
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	scav3.guardGate();
	scav3.attack("Pierre");
	scav3.beRepaired(100);
	scav3.takeDamage(20);
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}