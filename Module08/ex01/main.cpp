#include "Span.hpp"

int main(void)
{
	std::cout << "test 42***********************************"<< std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "***********************************"<< std::endl;
	std::cout<<std::endl;
	try
	{
		Span my_span(5);

		my_span.addNumber(42);
		my_span.addNumber(1);
		std::cout << "test 1"<< std::endl;
		std::cout << my_span.longestSpan() << std::endl;
		my_span.addNumber(3);
		std::cout << "test 2 after adding 3 "<< std::endl;
		std::cout << my_span.longestSpan() << std::endl;
		std::cout << my_span.shortestSpan() << std::endl;

		my_span.addNumber(43);
		std::cout << "test 3 after adding 43 "<< std::endl;
		std::cout << my_span.longestSpan() << std::endl;
		my_span.addNumber(99);
		std::cout << "test 4 after adding 99 "<< std::endl;
		std::cout << my_span.longestSpan() << std::endl;
		std::cout << my_span.shortestSpan() << std::endl;
		my_span.addNumber(100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "test 5 *************** "<< std::endl;
	std::vector<int> range(99999, 0);

	for (unsigned i = 0; i < 99999; i++)
		range[i] = i;

	try
	{
		Span huge_span(99999);
		huge_span.addRange(range.begin(), range.end());
		std::cout << huge_span.longestSpan() << std::endl;
		std::cout << huge_span.shortestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}
