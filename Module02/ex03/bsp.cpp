#include "Fixed.hpp"
#include "Point.hpp"

float sign(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const pnt)
{
		float d1, d2, d3;
		bool has_neg, has_pos;

		
		d1 = sign(pnt, a, b);
		d2 = sign(pnt, b, c);
		d3 = sign(pnt, c, a);

		has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
		has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

		return !(has_neg && has_pos);
}