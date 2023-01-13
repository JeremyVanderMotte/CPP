
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string s1 = "Pierre";
	std::string s2 = "Paul";
	std::string s3 = "Smert";

	ClapTrap c1(s1);
	FragTrap frag(s3);
	ScavTrap trap(s2);

	std::cout << std::endl;
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << trap << std::endl;

	std::cout << "==============" <<std::endl;
	c1.attack("Paul");
	frag.attack("Paul");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	frag.takeDamage(50);
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	frag.beRepaired(50);
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	frag.takeDamage(0);
	frag.highFivesGuys();
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	// frag.highFivesGuys();
	// frag.attack("Paul");     ---Remplacer Energy Point par 0
	// frag.beRepaired(5);
	frag.takeDamage(100);
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	frag.highFivesGuys();
	frag.attack("Pierre");
	frag.beRepaired(100);
	frag.takeDamage(20);
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}