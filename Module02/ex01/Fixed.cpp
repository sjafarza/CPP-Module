#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_n = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const n)
{
	this->_n = n << this->_bits; /* shift(left) 8     or    multipy 2 pouissance 8 */
	std::cout << "Int constructor called\n";

}

Fixed::Fixed(float const f)
{
	//this->_n = (n << this->_bits);  /* shift 8 or 2 pouissance 8  not correcte for Float , must multyply 2power8 */
	int p = ft_calcul_pow(2, this->_bits);
	this->_n = roundf(f * p);
	std::cout << "Float constructor called\n";

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
		//this->_n = rval.getRawBits();
		this->_n = rval._n;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i)
{
	o << i.toFloat();
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

float Fixed::toFloat( void ) const
{
	int p = ft_calcul_pow(2, this->_bits);
	return (((float)this->_n) / p);  /* reverse of Fixed(float const f)--> must divide to P*/
}

int Fixed::toInt( void ) const
{
	return(this->_n >> this->_bits); /* shift(rigth) 8     or    divide 2 pouissance 8 */
}

int ft_calcul_pow(int b, int const nb_bits)
{
	int i = -1;
	int	r = 1;
	while (++i < nb_bits)
		r *= b;
	return (r);	
}