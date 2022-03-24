#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{
    private:
        Fixed const  _x;
        Fixed const  _y;
    
    public:
    /* constructor */
       Point(void);
       Point(float const& x, float const& y);
       
       /* Destructor */
       ~Point(void);

    /* copy Constructor*/
        Point(Point const &pp);
        
    /* operation  overload */
        Point &operator = (Point const &pp);
	    bool operator==(Point const &other) const;

        Fixed getX(void) const;
	    Fixed getY(void) const;

};

std::ostream& operator<<(std::ostream& o, Point const& inst);

float sign(Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif