#include "Point.hpp"


Point::Point(void) : _x(0), _y(0){}

Point::Point(float const& x, float const& y):_x(x), _y(y)
{
}

Point::Point(Point const &pp) : _x(pp.getX()), _y(pp.getY())
{

}

Point::~Point(void)
{ 

}

Point	&Point::operator = (Point const &pp)
{
	return(*this);
}

Fixed Point::getX(void) const
{
	return(this->_x);
}

Fixed Point::getY(void) const
{
	return(this->_y);
}

std::ostream& operator<<(std::ostream& o, Point const& inst)
 {
	 o << "(" << inst.getX() << ", " << inst.getY() << ")";
	 return o;
}