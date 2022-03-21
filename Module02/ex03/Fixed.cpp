#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_n = 0;
}

Fixed::Fixed(int const n)
{
	this->_n = n << this->_bits; /* shift(left) 8     or    multipy 2 pouissance 8 */
}

Fixed::Fixed(float const f)
{
	//this->_n = (n << this->_bits);  /* shift 8 or 2 pouissance 8  not correcte for Float , must multyply 2power8 */
	int p = ft_calcul_pow(2, this->_bits);
	this->_n = roundf(f * p);
}

Fixed::~Fixed(void)
{
}

/*-------------Copy Constructor-------------------------*/

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

/*----------------overload-------------------------------*/

Fixed&	Fixed::operator=(Fixed const& rval)
{
	if (this != &rval)
		this->_n = rval._n;
	return (*this);
}

bool Fixed::operator > (Fixed const& other) const
{
	return (this->_n > other._n);
}

bool Fixed::operator < (Fixed const& other) const
{
	return (this->_n < other._n);
}

bool Fixed::operator >= (Fixed const& other) const
{
	return (this->_n >= other._n);
}

bool Fixed::operator <= (Fixed const& other) const
{
	return (this->_n <= other._n);
}

bool Fixed::operator == (Fixed const& other) const
{
	return (this->_n == other._n);
}

bool Fixed::operator != (Fixed const& other) const
{
	return (this->_n != other._n);
}

Fixed Fixed::operator + (Fixed const& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator - (Fixed const& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator * (Fixed const& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator / (Fixed const& other) const
{
	if (other.toFloat() != 0)
		return (Fixed(this->toFloat() / other.toFloat()));
	else
	{
		std::cout << "Error: Divide by Zero !" << std::endl;
		return (0);
	}	
}

Fixed& Fixed::operator--(void)        //pre decrement
{
	this->_n--;
	return (*this);
}

 Fixed Fixed::operator--(int)     //post decremt
 {
	 Fixed ret(*this);

	 --(*this);
	 return (ret);
 }

 Fixed& Fixed::operator++(void)        //pre increment
{
	this->_n++;
	return (*this);
}

 Fixed Fixed::operator++(int)     //post increment
 {
	 Fixed ret(*this);

	 ++(*this);
	 return (ret);
 }


std::ostream&	operator<<(std::ostream& o, Fixed const& i)
{
	o << i.toFloat();
	return(o);
}

/*-----------------Methods--------------------------------*/

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
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

Fixed&	Fixed::min(Fixed& inst1, Fixed& inst2)
{
	if (inst1.toFloat() < inst1.toFloat())
		return (inst1);
	return (inst2);
}

Fixed& Fixed::max(Fixed& inst1, Fixed& inst2)
{
	if (inst1.toFloat() > inst1.toFloat())
		return (inst1);
	return (inst2);	
}

Fixed const& Fixed::min(Fixed const& inst1, Fixed const& inst2)
{
	if (inst1.toFloat() < inst1.toFloat())
		return (inst1);
	return (inst2);
}
Fixed const& Fixed::max(Fixed const& inst1, Fixed const& inst2)
{
	if (inst1.toFloat() > inst1.toFloat())
		return (inst1);
	return (inst2);

}

int ft_calcul_pow(int b, int const nb_bits)
{
	int i = -1;
	int	r = 1;
	while (++i < nb_bits)
		r *= b;
	return (r);	
}