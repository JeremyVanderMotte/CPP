
#include "ClapTrap.hpp"

int	main(void)
{
	std::string s1 = "Pierre";
	std::string s2 = "Paul";

	ClapTrap c1(s1);
	ClapTrap c2(s2);
	//ClapTrap claptrap3;
	//ClapTrap claptrap4(claptrap2);

	//claptrap3 = claptrap2;

	std::cout << std::endl;
	//std::cout << claptrap3 << std::endl;
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.attack("Paul");
	c2.attack("Pierre");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	c2.takeDamage(8);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	c2.beRepaired(8);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	c2.takeDamage(0);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	c1.attack("Paul");
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.attack("Paul");
	c1.beRepaired(5);
	c1.takeDamage(12);
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	c2.takeDamage(10);
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c2.attack("Pierre");
	c2.beRepaired(50);
	c2.takeDamage(58);
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}