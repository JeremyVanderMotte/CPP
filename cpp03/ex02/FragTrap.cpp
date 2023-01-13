#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default Constructor FragTrap called" << std::endl;
	this->_name = "Default FragTrap";
	this->_hitPoint = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src.getName())
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	this->_name = src._name + "Copy";
	this->_hitPoint = src._hitPoint;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor FragTrap called" << std::endl;
	this->_hitPoint = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Copy assignement operator FragTrap called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName() + "Assigned";
		this->_attack_damage = rhs.getAttackDamage();
		this->_hitPoint = rhs.getHitPoint();
		this->_energy_point = rhs.getEnergyPoint();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & rhs )
{
	o << "Name = " << rhs.getName()
	<< " | Hit Point = " << rhs.getHitPoint()
	<< " | Energy Point = " << rhs.getEnergyPoint()
	<< " | Attack Damage = " << rhs.getAttackDamage();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " ask to high five : He is dead." << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "FlagTrap " << this->_name << " can't ask to high five : No energy point left" << std::endl;
		return ;
	}
	std::cout << "Would you like to high five me ? UwU" << std::endl; 
}
/* ************************************************************************** */