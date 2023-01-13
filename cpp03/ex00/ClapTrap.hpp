#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
		int			getHitPoint(void) const;
		int			getEnergyPoint(void) const;
		int			getAttackDamage(void) const;
		ClapTrap &		operator=( ClapTrap const & rhs );

	private:
		std::string	_name;
		int			_hitPoint;
		int			_energy_point;
		int			_attack_damage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */