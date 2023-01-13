#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _n;

	public:
		Array()
		{
			this->_n = 0;
			this->_array = new T[0];
		}

		Array(unsigned int n) : _n(n)
		{
			this->_array = new T[n];
		}

		Array(Array const & ref) : _n(ref._n)
		{
			this->_array = new T[ref._n];
			for(unsigned int i = 0; i < ref._n; i++)
				this->_array[i] = ref._array[i];
		}
		~Array()
		{
			delete [] this->_array;
		}

		Array & operator=(Array const & ref)
		{
			this->_n = ref._n;
			delete [] this->_array;
			this->_array = new T[ref._n];
			for(unsigned int i = 0; i < ref._n; i++)
				this->_array[i] = ref._array[i];
			return (*this);
		}

		T & operator[](int i)
		{
			if (i < 0 || i >= static_cast<int>(this->_n))
				throw (std::exception());
			else
				return (this->_array[i]);
		}

		unsigned int size(void) const
		{
			return (this->_n);
		}

		T *getArray(void) const
		{
			return (this->_array);
		}
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
	for (unsigned int i = 0; i < rhs.size(); i++)
	{	
		std::cout << "Array[" << i << "] = " << (rhs.getArray())[i];
		std::cout << std::endl;
	}
	return (o);
}

#endif