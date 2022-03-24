#include <iostream>
# include "Fixed.hpp"
# include "Point.hpp"

bool bsp( Point const p1, Point const p2, Point const p3, Point const pnt);

int main(void)
{
	Point const A(0, 0);
	Point const B(20, 0);
	Point const C(10, 30);
	Point const P(10, -0.1);
	
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	std::cout << "C = " << C << std::endl;
	std::cout << "P = " << P << std::endl << std::endl;
	
	if (bsp(A, B, C, P)) 
	{
		std::cout << "Point is inside" << std::endl;
		return 1;
		}
	else
	{
		std::cout << "Point is not inside" << std::endl;
	}
		return 0;
}
