#include "Harl.hpp"

Harl::Harl()
{
	// std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
	// std::cout << "Harl destructor called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my"
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs"
		<< "more money. You didn’t putenough bacon in my burger!"
		<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming foryears whereas you started working here"
		<< " since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak"
		<< " to the manager now." << std::endl;
}

void	Harl::complain(std::string level_asked)
{
	void (Harl::*fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	for (int i = 0; i < 4; i++)
	{
		if (!level[i].compare(level_asked))
			index = i;
	}
	switch (index)
	{
		case 0: case 1: case 2: case 3:
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break;
		default:
			std::cout << "[ Probably complaining "
				<< "about insignificant problems ]" << std::endl;
			break;
	}
}