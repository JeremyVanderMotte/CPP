
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); 
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << a++ << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Max (a,b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min (a,b) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "b / 2 = " << b / Fixed(2) << std::endl;
	std::cout << "b * 2 = " << b * Fixed(2) << std::endl;
	std::cout << "b - 2 = " << b - Fixed(2) << std::endl;
	std::cout << "b + 2 = " << b + Fixed(2) << std::endl;
	std::cout << "b == a : " << (b == a) << std::endl;
	std::cout << "b != a : " << (b != a) << std::endl;
	std::cout << "b != b : " << (b != b) << std::endl;
	std::cout << "b == b : " << (b == b) << std::endl;
	std::cout << "b <= b : " << (b <= b) << std::endl;
	std::cout << "b <= a : " << (b <= a) << std::endl;
	std::cout << "b < b : " << (b < b) << std::endl;
	std::cout << "b < a : " << (b < a) << std::endl;
	std::cout << "b >= b : " << (b >= b) << std::endl;
	std::cout << "b > b : " << (b > b) << std::endl;
	std::cout << "b > a : " << (b > a) << std::endl;
	std::cout << "b >= a : " << (b >= a) << std::endl;
	return (0);
}