#include "Point.hpp"


Point::Point() : _x(0), _y(0){}

/*Point::Point(void)
{
    this->_x = Fixed(0);
	this->_y = Fixed(0);
}*/

Point::~Point(void)
{

}

Point::Point(Point const &pp)
{
	*this = pp;
}

Point::Point(Fixed const& x, Fixed const & y) : _x(x), _y(y){};

/*Point::Point(Fixed const x, Fixed const y)
{
	this->_x = x.toInt();
	this->_y = y;
}*/

Point &Point::operator=(Point const &pp)
{
	/*this->_x = pp._x;
	this->_y = pp._y;*/
	(Fixed) this->_x = (Fixed)pp._x;
	(Fixed) this->_y = (Fixed)pp._y;
	return (*this);
}
Fixed Point::getX(void) const
{
	return(this->_x);
}

Fixed Point::getY(void) const
{
	return(this->_y);
}