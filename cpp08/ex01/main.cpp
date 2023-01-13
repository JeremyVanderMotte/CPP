# include "Span.hpp"


int main(void)
{
	//EXO MAIN
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// srand(time(NULL));
	//TRY TO ADD NUMBER BUT EXCEPTION FULL
	try
	{
		std::cout << "SPAN IS FULL TRY TO ADD 1 MORE" << std::endl;
		std::cout << "====> EXCEPTION => NO MORE PLACE IN SPAN" << std::endl;
		sp.addNumber(78);
	}
	catch(const Span::SpanFullException & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	//TRY TO shortest span with 0 or 1 number
	try
	{
		Span sp2(0);
		std::cout << "0 NUMBERS IN SPAN TRY TO SHORTEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.shortestSpan();
	}
	catch(const Span::NotEnoughNumbersException & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span sp2(1);
		sp2.addNumber(78);
		std::cout << "1 NUMBERS IN SPAN TRY TO SHORTEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.shortestSpan();
	}
	catch(const Span::NotEnoughNumbersException & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	//TRY TO longest span with 0 or 1 number
	try
	{
		Span sp2(0);
		std::cout << "0 NUMBERS IN SPAN TRY TO LONGEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.longestSpan();
	}
	catch(const Span::NotEnoughNumbersException & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span sp2(1);
		sp2.addNumber(78);
		std::cout << "1 NUMBERS IN SPAN TRY TO LONGEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.longestSpan();
	}
	catch(const Span::NotEnoughNumbersException & e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp1(20);
	std::vector<int> vectB = sp.getVect();
	std::cout << std::endl;

	sp1.fill(vectB.begin(), vectB.end());
	std::cout << "originel : " << sp << std::endl;
	std::cout << "fill with new method : " << sp << std::endl;
	sp1.addNumber(132);
	std::cout << sp1 << std::endl;

	std::vector<int> v;
	for (int i = 0; i < 20000; i+=20)
		v.push_back(i);
	Span sp6(1500);
	sp6.fill(v.begin(), v.end());
	std::cout << "TEST WITH 1000 int : SHORTEST = 20, LONGEST = 19980" << std::endl;
	std::cout << "shorteset = " << sp6.shortestSpan() << std::endl;
	std::cout << "longest = " << sp6.longestSpan() << std::endl;
	std::cout << std::endl;
	// std::cout << sp6 << std::endl;
	return (0);
}