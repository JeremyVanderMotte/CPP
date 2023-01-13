#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iterator>


/*
*	@link https://en.cppreference.com/w/cpp/container/stack @endlink
*	Stack contains T. The second type is by default DEQUE.
*	while typedef, We can use std::stack<T>::containe_type to get the container use
*	=> Deque and use the element iterator to have an iterator in our MutantStack class.
*	So we have an iterator.
*
*	To use begin and end. We just need to use the method in stack
*	=> top to have the first element and end to have the last one.
*
*	We can use this method on all iterator.
*
*	in std::stack<T> : we have the memeber objects which correspond to 
*	the container. We can call then begin in this variable to write ours.
*/
template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack() : std::stack<T>(){}
		MutantStack(const MutantStack & src) : std::stack<T>(src){}
		~MutantStack() {};
		MutantStack &operator=(const MutantStack &rhs)
		{
			if (*this != rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}
		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
		const_iterator begin() const { return std::stack<T>::c.begin(); }
		const_iterator end() const { return std::stack<T>::c.end(); }
		reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
		reverse_iterator rend() { return std::stack<T>::c.rend(); }
		const_reverse_iterator rbegin() const { return std::stack<T>::c.rbegin(); }
		const_reverse_iterator rend() const { return std::stack<T>::c.rend(); }

		
};

#endif