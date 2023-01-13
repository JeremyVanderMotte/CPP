#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{

	protected:
		std::string type;

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		virtual void 		makeSound(void) const = 0;
		std::string	getType(void) const;

		AAnimal &		operator=( AAnimal const & rhs );

};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** AAnimal_H */