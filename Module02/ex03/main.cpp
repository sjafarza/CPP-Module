#include <iostream>
# include "Fixed.hpp"
# include "Point.hpp"

float sign(Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	bool bo;

	Fixed f(3);
	Fixed f1(5);
	Fixed f2(8);
	Point p1(f,f);
	Point p2(f,f1);
	Point p3(f1,f);

	Point p(f2,f2);
	bo = bsp(p1, p2, p3, p);
	std::cout<<bo<<std::endl;
	return 0;
}
