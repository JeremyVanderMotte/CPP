#ifndef CHARACHTER_HPP
# define CHARACHTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria 	*_items[4];
		std::string	_name;

	public:
		Character();
		Character(Character const & src);
		Character(std::string const name);
		virtual ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getMateriaIdx(int index);
		Character & operator=(Character const & rhs);
};

#endif