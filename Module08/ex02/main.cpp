#include "MutantStack.hpp"

int main()
{
	std::cout << "=====> Test 42 <=====" << std::endl << std::endl;

	MutantStack<int> mstack;

	std::cout << " mstack.push() => 5, 17 " << std::endl;
	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top(): " << mstack.top() << std::endl;

	std::cout << "mstack.pop() " << std::endl;
	mstack.pop();

	std::cout << "mstack.size():" << mstack.size() << std::endl;
	std::cout << "mstack.top(): " << mstack.top() << std::endl;

	std::cout << "< mstack.push() => 3, 5, 737, 0 >" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "=====> Test with list <=====" << std::endl << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		//std::cout << mstack.top() << std::endl;
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		/*MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();*/

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}

	std::cout << std::endl << "=====> Test with MutantStack<=====" << std::endl << std::endl;

	MutantStack<std::string> strstack;
	std::list<std::string>   strlist;

	std::cout << "< strstack.push() => Hello, saray >" << std::endl;
	std::cout << "< strlist.push_back() => Hello, saray >" << std::endl;
	strstack.push("Hello");
	strstack.push("saray");
	strlist.push_back("Hello");
	strlist.push_back("saray");

	std::cout << "< strstack.pop() >" << std::endl;
	std::cout << "< strlist.pop() >" << std::endl;
	strstack.pop();
	strlist.pop_back();

	std::cout << "strstack.size():" << strstack.size() << std::endl;
	std::cout << "strlist.size():" << strlist.size() << std::endl;

	std::cout << "< strstack.push() => Hi, 42 >" << std::endl;
	std::cout << "< strlist.push_back() => 42, Hi >" << std::endl;
	strstack.push("42");
	strstack.push("SHi");
	strlist.push_back("42");
	strlist.push_back("Hi");

	MutantStack<std::string>::iterator itstack = strstack.begin();
	MutantStack<std::string>::iterator itestack = strstack.end();
	std::list<std::string>::iterator   itlist = strlist.begin();
	std::list<std::string>::iterator   itelist = strlist.end();

	std::cout << "< str stack content >" << std::endl;
	for (; itstack != itestack; ++itstack) {
		std::cout << *itstack << std::endl;
	}

	std::cout << "< str list content >" << std::endl;

	for (; itlist != itelist; ++itlist) {
		std::cout << *itlist << std::endl;
	}	
}
