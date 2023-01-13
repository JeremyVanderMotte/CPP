#include "ConvertScalar.hpp"


ConvertScalar::ConvertScalar() : _littString("Default")
{
	std::cout << "Default constructor called" << std::endl;
	this->_litteral = 0;
}

ConvertScalar::ConvertScalar(std::string const & litteral) : _littString(litteral)
{
	std::cout << "Constructor called" << std::endl;
	this->_litteral = atof(litteral.c_str());
}


ConvertScalar::ConvertScalar( const ConvertScalar & src ) : _littString(src._littString)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_litteral = src._litteral;
}

ConvertScalar::~ConvertScalar()
{
	std::cout << "Destructor called" << std::endl;
}

ConvertScalar &				ConvertScalar::operator=( ConvertScalar const & rhs )
{
	this->_litteral = rhs._litteral;
	return *this;
}

void	ConvertScalar::printChar(void) const
{
	char c;
	double nanTest;

	std::cout << "char: ";
	nanTest = atof(this->_littString.c_str());
	if (this->_litteral != nanTest)
		std::cout << "Impossible" << std::endl;
	else if (this->_litteral > static_cast<double>(CHAR_MAX) ||
		this->_litteral < static_cast<double>(CHAR_MIN))
		std::cout << "Impossible" << std::endl;
	else if (this->_litteral < 20 || this->_litteral > 126)
		std::cout << "Non displayable" << std::endl;
	else
	{
		c = static_cast<char>(this->_litteral);
		std::cout << '\'' << c << '\'' << std::endl;
	}
}

void	ConvertScalar::printInt(void) const
{
	int i;
	double nanTest;

	std::cout << "int: ";
	nanTest = atof(this->_littString.c_str());
	if (this->_litteral != nanTest)
		std::cout << "Impossible" << std::endl;
	else if (this->_litteral > static_cast<double>(INT_MAX) || 
		this->_litteral < static_cast<double>(INT_MIN))
		std::cout << "Impossible" << std::endl;
	else
	{
		i = static_cast<int>(this->_litteral);
		std::cout << i << std::endl;
	}
}

void	ConvertScalar::printDouble(void) const
{
	double d = this->_litteral;
	double nanTest;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double: ";

	nanTest = atof(this->_littString.c_str());
	if (this->_litteral != nanTest)
		std::cout << "nan" << std::endl;
	else if (this->_litteral == INFINITY)
		std::cout << "+inf" << std::endl;
	else if (this->_litteral == -INFINITY)
		std::cout << "-inf" << std::endl;
	else
		std::cout << d << std::endl;
}

void 	ConvertScalar::printFloat(void) const
{
	float	f;
	double nanTest;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: ";

	nanTest = atof(this->_littString.c_str());
	if (this->_litteral != nanTest)
		std::cout << "nan" << std::endl;
	else if (this->_litteral == INFINITY)
		std::cout << "+inff" << std::endl;
	else if (this->_litteral == -INFINITY)
		std::cout << "-inff" << std::endl;
	else
	{
		f = static_cast<float>(this->_litteral);
		std::cout << f;
		std::cout << "f" << std::endl;
	}
}

void	ConvertScalar::printConversions(void) const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}