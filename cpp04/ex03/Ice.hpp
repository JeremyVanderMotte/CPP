#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice(std::string const & type);
		Ice( Ice const & src );
		virtual ~Ice();

		Ice* clone(void) const;
		void	use(ICharacter& target);

		Ice &		operator=( Ice const & rhs );
		
};

#endif