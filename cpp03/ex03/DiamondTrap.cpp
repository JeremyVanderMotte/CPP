#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap("Default Diamond_clap_name"), FragTrap("Default Diamond_clap_name"), ScavTrap("Default Diamond_clap_name")
{
	std::cout << "Default Constructor DiamondTrap called" << std::endl;
	this->_name = "Default Diamond";
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src.getName() + "_clap_name"), FragTrap(src.getName() + "_clap_name"), ScavTrap(src.getName() + "_clap_name")
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	this->_name = src._name + "Copy";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "Constructor DiamondTrap called" << std::endl;
	this->_name = name;
} 
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "Copy assignement operator DiamondTrap called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName() + "Assigned";
		this->_attack_damage = rhs.getAttackDamage();
		this->_hitPoint = rhs.getHitPoint();
		this->_energy_point = rhs.getEnergyPoint();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & rhs )
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
void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name is : " << this->_name
	<< " | sub object name = " << this->getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */