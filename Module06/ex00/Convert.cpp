#include "Convert.hpp"

Convert::Convert() :
_intOverflow(0),
_charError(0),
_intNo(0),
_floatOverflow(0),
_floatNo(0),
_doubleOverflow(0),
_doubleNo(0),
_charValue(0),
_charNo(0),
_intValue(0),
_floatValue(0),
_doubleValue(0)
{
}

Convert::~Convert()
{

}

Convert::Convert(const Convert& other) :
_intOverflow(other._intOverflow),
_charError(other._charError),
_floatOverflow(other._floatOverflow),
_doubleOverflow(other._doubleOverflow),
_intNo(other._intNo),
_charNo(other._charNo),
_floatNo(other._floatNo),
_doubleNo(other._doubleNo),
_charValue(other._charValue),
_intValue(other._intValue),
_floatValue(other._floatValue),
_doubleValue(other._doubleValue)
{
}

Convert& Convert::operator=(const Convert& other)
{
    _intOverflow = other._intOverflow;
	_charError = other._charError;
	_floatOverflow = other._floatOverflow;
	_doubleOverflow = other._doubleOverflow;
	_intNo = other._intNo,
	_charNo = other._charNo,
	_floatNo = other._floatNo,
	_doubleNo = other._doubleNo,
	_charValue = other._charValue;
	_intValue = other._intValue;
	_floatValue = other._floatValue;
	_doubleValue = other._doubleValue;
	return (*this);
}

 
void	Convert::ToChar(double d, std::string s)
{
  if (!isdigit(s[0]) && s.length() >= 3)
   _charError = 1;
else if (d >= 32 && d < 127)
  _charValue = static_cast<char>(d);
else 
	_charNo = 1;
}

void	Convert::ToInt(double d, std::string s)
{
	if (!std::isdigit(s[0]) && s.length() >= 3)
		_intOverflow = 1;
	else if (d > std::numeric_limits<int>::max() ||
             d < std::numeric_limits<int>::min())
	{
		_intNo = 1;
 	 } 
	else
	{
		// *****??*****   _intValue = static_cast<int>(drand48_r);
		_intValue = static_cast<int>(d);
  	}

}

void   Convert::fetchValue(std::string s)
{
	double d;

	if (!std::isdigit(s[0]) && s.length() == 1)
	 {
      
	  _intValue = static_cast<int>(s[0]);
	  d = _intValue;
    }
	 else 
	{
      d = std::atof(s.c_str());
	  
    }
	_doubleValue = d;
	_floatValue = d;

    ToChar(d, s);
    ToInt(d, s);
}

void    Convert::printChar(void) const
{
	if (_charError == 1)
		std::cout << " impossible" << std::endl;
	else if (_charNo == 1)
		 std::cout << " Non displayable" << std::endl;
	else
		std::cout << _charValue << std::endl;
}

void    Convert::printInt(void) const
{
	if (_intOverflow == 1)
		std::cout << " impossible" << std::endl;
	else if (_intNo == 1)
		 std::cout << " Non displayable" << std::endl;
	else
		std::cout << _intValue << std::endl;
}

void   Convert::printFloat(void) const
{
	if (_floatOverflow == 1)
		std::cout << " impossible" << std::endl;
	else if (_floatNo == 1)
		 std::cout << " Non displayable" << std::endl;
	else
	{
		 std::cout << _floatValue;
        if (_floatValue < 1000000 && _floatValue > -1000000 && _intValue == _floatValue)
            std::cout << ".0";
        std::cout << "f" << std::endl;
	}
}

void    Convert::printDouble() const
{
	if (_doubleOverflow == 1)
		std::cout << " impossible" << std::endl;
	else if (_doubleNo == 1)
		 std::cout << " Non displayable" << std::endl;
	else
	{
		 std::cout << _doubleValue;
        if (_doubleValue < 1000000 && _doubleValue > -1000000 && _intValue == _doubleValue)
            std::cout << ".0";
        std::cout << std::endl;
	}
}

std::ostream&   operator<<(std::ostream& o, Convert const& i)
{
    o << "char: ";
	i.printChar();
	o << "int: ";
	i.printInt();
	o << "float: ";
	i.printFloat();
	o << "double: ";
	i.printDouble();
    return (o);
}

