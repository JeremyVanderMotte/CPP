#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor ClapTrap called" << std::endl;
	this->_name = "Default ClapTrap";
	this->_hitPoint = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	this->_name = src._name + "Copy";
	this->_hitPoint = src._hitPoint;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	this->_hitPoint = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Copy assignement operator ClapTrap called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName() + "Assigned";
		this->_attack_damage = rhs.getAttackDamage();
		this->_hitPoint = rhs.getHitPoint();
		this->_energy_point = rhs.getEnergyPoint();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & rhs )
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

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack : He is dead." << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack : No energy points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "Can't take 0 damage..." << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "Oops... Already dead..." << std::endl;
		return ;
	}
	this->_hitPoint -= amount;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " can't repair : He is dead." << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << this->_name << " can't repair : No energy points left." << std::endl;
		return ;
	}
	if (amount == 0)
	{
		std::cout << "Can't repair 0 damage..." << std::endl;
		return ;
	}
	this->_hitPoint += amount;
	this->_energy_point--;
	std::cout << "ClapTrap " << this->_name << " repairs himself for " << amount << " life point" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoint(void) const
{
	return (this->_hitPoint);
}

int	ClapTrap::getEnergyPoint(void) const
{
	return (this->_energy_point);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}
/* ************************************************************************** */