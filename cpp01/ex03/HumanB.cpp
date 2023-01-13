#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB constructor called" << std::endl;
	this->_weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack() const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attcks with their fists" << std::endl;
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}