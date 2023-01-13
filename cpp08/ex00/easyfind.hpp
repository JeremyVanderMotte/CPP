#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
int	easyfind(T const & cont, int n)
{
	typename T::const_iterator it;

	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw(std::out_of_range("Number not found in container"));
	else
		return (n);
}

#endif