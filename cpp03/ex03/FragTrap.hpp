#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void	highFivesGuys(void);

	private:

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */