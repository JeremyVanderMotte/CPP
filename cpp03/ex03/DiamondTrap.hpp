#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();
		using FragTrap::_hitPoint;
		using FragTrap::_attack_damage;
		using ScavTrap::_energy_point;
		using ScavTrap::attack;

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void	whoAmI(void);

	private:
		std::string	_name;
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */