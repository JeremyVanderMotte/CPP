#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	display(T const & c)
{
	std::cout << c << " ";
}

template <typename T>
void	iter(T *array, int size, void f(T const & elem))
{
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
	}
	std::cout << std::endl;
}

#endif