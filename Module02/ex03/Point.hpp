#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{
    private:
        Fixed   _x;
        Fixed   _y;
    
    public:
    /* constructor */
       Point(void);
       Point(Fixed const x, Fixed const y);

    /* Destructor */
        ~Point(void);

    /* copy Constructor*/
        Point(Point &pp);
        Point &operator=(Point const &pp);
    /* operation  overload */
        Fixed getX(void) const;
	    Fixed getY(void) const;

};

float sign(Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif