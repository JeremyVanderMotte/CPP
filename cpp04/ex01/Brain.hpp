#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		std::string	*	getIdeas(void) const;

		Brain &		operator=( Brain const & rhs );
	
	private:
		std::string	*_ideas;
};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif