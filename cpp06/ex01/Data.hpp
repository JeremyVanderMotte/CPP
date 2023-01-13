#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{

	public:

		Data();
		Data( Data const & src );
		Data(std::string name);
		~Data();

		std::string getName(void) const;

		Data &		operator=( Data const & rhs );

	private:
		std::string	_name;
};

#endif 