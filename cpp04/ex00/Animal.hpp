#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

	protected:
		std::string type;

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		virtual void 		makeSound(void) const;
		std::string	getType(void) const;

		Animal &		operator=( Animal const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */