#include "Point.hpp"

Point::Point(void)
{
    this->_x = Fixed(0);
	this->_y = Fixed(0);
}

Point::~Point(void)
{

}

Point::Point(Point &pp)
{
	*this = pp;
}

Point::Point(Fixed const x, Fixed const y)
{
	this->_x = x;
	this->_y = y;
}
Point &Point::operator=(Point const &pp)
{
	this->_x = pp._x;
	this->_y = pp._y;
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