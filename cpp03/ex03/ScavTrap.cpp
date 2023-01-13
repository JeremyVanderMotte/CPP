#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Constructor ScavTrap called" << std::endl;
	this->_hitPoint = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src.getName())
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	this->_name = src._name + "Copy";
	this->_hitPoint = src._hitPoint;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	this->_hitPoint = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Copy assignement operator ScavTrap called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName() + "Assigned";
		this->_attack_damage = rhs.getAttackDamage();
		this->_hitPoint = rhs.getHitPoint();
		this->_energy_point = rhs.getEnergyPoint();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & rhs )
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
void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack : He is dead." << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack : No energy points left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_point--;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't enter in guard mode : He is dead." << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't enter in guard mode : No energy point left" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " enters in Gate keeper mode" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */