#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main()
{
	// MutantStack<int>    mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// mstack.push(0);
	// MutantStack<int>::iterator it1 = mstack.begin();
	// MutantStack<int>::iterator ite1 = mstack.end();
	// ++it1;
	// --it1;
	// while(it1 != ite1)
	// {
	// 	std::cout << *it1 << std::endl;
	// 	++it1;
	// }

	std::cout << "WILL DISPLAY 4 5 6 (iterator)" << std::endl;
	MutantStack<int> stackm;
	stackm.push(4);
	stackm.push(5);
	stackm.push(6);

	MutantStack<int>::const_iterator it = stackm.begin();
	MutantStack<int>::const_iterator ite = stackm.end();
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "WILL DISPLAY 4 5 6 (const iterator)" << std::endl;
	MutantStack<int>::const_iterator itc = stackm.begin();
	MutantStack<int>::const_iterator itec = stackm.end();
	while(itc != itec)
	{
		std::cout << *itc << std::endl;
		++itc;
	}

	std::cout << std::endl;
	std::cout << "WILL DISPLAY 6 5 4 (reverse iterator)" << std::endl;
	MutantStack<int>::reverse_iterator rit = stackm.rbegin();
	MutantStack<int>::reverse_iterator rite = stackm.rend();
	while(rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << std::endl;
	std::cout << "WILL DISPLAY 6 5 4 (const reverse iterator)" << std::endl;
	MutantStack<int>::const_reverse_iterator ritc = stackm.rbegin();
	MutantStack<int>::const_reverse_iterator ritec = stackm.rend();
	while(ritc != ritec)
	{
		std::cout << *ritc << std::endl;
		++ritc;
	}
	
	std::cout << std::endl;
	std::cout << "COMPARE WITH LIST<INT>" << std::endl;
	std::cout << "DISPLAY 4 5 6 (ITERATOR)" << std::endl;
	std::list<int> lst;
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);
	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itle = lst.end();
	while(itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	return (0);
}