#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_n = 0;
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

/*-------------Copy Constructor-------------------------*/

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

/*----------------overload-------------------------------*/

Fixed&	Fixed::operator=(Fixed const& rval)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rval)
		this->_n = rval.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i)
{
	o << i.getRawBits();
	return(o);
}

/*-----------------Methods--------------------------------*/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;

}


