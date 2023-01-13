#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i])
			this->_materias[i] = (src._materias[i])->clone();
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (ref._materias[i])
			this->_materias[i] = (ref._materias[i])->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	
	if (!m)
	{
		std::cout << "Not a valid Materia" << std::endl;
		return ;
	}
	while (this->_materias[i] && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "No space left to learn new Materia" << std::endl;
		return ;
	}
	std::cout << "Materia " << m->getType() << " learnt" << std::endl;
	this->_materias[i] = m;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4 && this->_materias[i] && this->_materias[i]->getType().compare(type))
		i++;
	if (i == 4 || !this->_materias[i])
	{
		std::cout << "No Materia matching" << std::endl;
		return (0);
	}
	std::cout << "Materia " << type << " created" << std::endl;
	return (this->_materias[i]->clone());
}