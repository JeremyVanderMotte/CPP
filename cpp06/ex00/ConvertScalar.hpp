#ifndef CONVERTSCALAR_HPP
# define CONVERTSCALAR_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <climits>
# include <iomanip>

class ConvertScalar
{

	public:

		ConvertScalar();
		ConvertScalar(std::string const & _litteral);
		ConvertScalar( ConvertScalar const & src );
		~ConvertScalar();

		void	printChar(void) const;
		void	printInt(void) const;
		void	printFloat(void) const;
		void	printDouble(void) const;
		void	printConversions(void) const;

		ConvertScalar &		operator=( ConvertScalar const & rhs );

	private:
		double _litteral;
		std::string _littString;
};

#endif