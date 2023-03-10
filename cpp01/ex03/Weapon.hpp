#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{

	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		std::string const & getType(void) const;
		void	setType(std::string name);

	private:
		std::string	_type;
};

#endif