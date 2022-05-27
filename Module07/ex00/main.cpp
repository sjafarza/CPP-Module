#include "whatever.hpp"
#include <iostream>

// for test with comlpex types

class A 
{
	private :
			int _n;

	public :
		A(void) : _n(0) {}
		A(int n): _n(n) {}

		A &operator = (A const &a) {_n = a._n; return *this ;}
		bool operator == (A const &rhs) const {return (this->_n == rhs._n);}
		bool operator != (A const &rhs) const {return(this->_n != rhs._n);}
		bool operator > (A const &rhs) const {return(this->_n > rhs._n);}
		bool operator < (A const &rhs) const {return(this->_n < rhs._n);}
		bool operator >= (A const &rhs) const {return(this->_n >= rhs._n);}
		bool operator <=  (A const &rhs) const {return(this->_n <= rhs._n);}

		int get_n() const {return _n;}

		

};
std::ostream &operator << (std::ostream &o, const A &a) {o << a.get_n(); return o; }

int main(void)
{
	{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	// for test with comlpex types
	std::cout << std::endl;
	std::cout << "\033[032m" <<"Test with comlpex types ." << std::endl;
	A a(2), b(4);
	swap(a,b);
	std::cout << "\n\033[0m" << "a= " <<a <<", b= "<<b << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;
	std::cout <<"min = " << min(a,b) << std::endl;
	return(0);
}