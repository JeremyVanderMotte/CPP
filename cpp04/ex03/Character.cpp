# include "Character.hpp"

Character::Character()
{
	// std::cout << "Character constructor called" << std::endl;
	this->_name = "Default name";
	for(int i = 0; i < 4; i++)
		this->_items[i] = 0;
}

Character::Character(std::string const name) : _name(name)
{
	// std::cout << "Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_items[i] = 0;
}

Character::Character(Character const & src)
{
	// std::cout << "Character copy constructor called" << std::endl;
	this->_name = src._name;
	for(int i = 0; i < 4; i++)
	{
		this->_items[i] = 0;
		if (src._items[i])
			this->_items[i] = src._items[i]->clone();
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
	}	
	std::cout << "Character destructor called" << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	// std::cout << "Character assignation called" << std::endl;
	this->_name = rhs._name;
	for(int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		if (rhs._items[i])
			this->_items[i] = rhs._items[i]->clone();
		else
			this->_items[i] = 0;
	}
	return (*this);
}

std::string	const & Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int i;

	if (!m)
	{
		std::cout << "Nothing to equip" << std::endl;
		return ;
	}
	i = 0;
	while (i < 4 && this->_items[i])
		i++;
	if (i == 4)
	{
		std::cout << "Already full... Sorry..." << std::endl;
		return ;
	}
	std::cout << "Materia " << m->getType() << " equip on " << this->_name << std::endl;
	this->_items[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Wrong index !" << std::endl;
		return ;
	}
	if (!this->_items[idx])
	{
		std::cout << "There is no Materia here..." << std::endl;
		return ;
	}
	std::cout << "Unequipped " << this->_items[idx]->getType() << " from " << this->_name << std::endl;
	this->_items[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Wrong index !" << std::endl;
		return ;
	}
	if (!this->_items[idx])
	{
		std::cout << "There is no Materia here..." << std::endl;
		return ;
	}
	this->_items[idx]->use(target);
}

AMateria*	Character::getMateriaIdx(int idx)
{
	return (this->_items[idx]);
}