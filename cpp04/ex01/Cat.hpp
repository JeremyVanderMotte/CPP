#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		void	makeSound(void) const;
		Brain *	getBrain(void) const;
		Cat &	operator=( Cat const & rhs );

	private:
		Brain *_brain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif