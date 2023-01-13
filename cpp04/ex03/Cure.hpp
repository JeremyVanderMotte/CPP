#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure*	clone(void) const;
		void	use(ICharacter& target);

		Cure &	operator=( Cure const & rhs );

};

#endif