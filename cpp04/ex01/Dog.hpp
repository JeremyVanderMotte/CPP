#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		void	makeSound(void) const;
		Brain *	getBrain(void) const;
		
		Dog &		operator=( Dog const & rhs );

	private:
		Brain *_brain;
};

std::ostream &	operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */