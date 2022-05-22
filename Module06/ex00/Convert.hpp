#ifndef CONVERT_HPP
# define CONVERT_HPP

# include<iostream>
# include <cstdlib> /* for use strtol() */
#include <climits> /* for INT_MAX AND INT_MIN */
#include <limits> /* for std::numeric_limits<int>::max() */
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>



class Convert
{
	private:

		bool	_intOverflow;
		bool	_floatOverflow;
		bool	_doubleOverflow;
		char	_charValue;
		int		_intValue;
		float	_floatValue;
		double	_doubleValue;
		bool	_intNo;
		bool	_charNo;
		bool	_floatNo;
		bool	_doubleNo;
		bool	_charError;

	public:

		Convert();
		~Convert();
		Convert(const Convert &other);
		Convert& operator=(const Convert &other);

		//double	getDouble() const;

		void	fetchValue(std::string s);
		void	ToChar(double d, std::string s);
		void	ToInt(double d, std::string s);

		void    printChar(void) const;
		void    printInt(void) const;
		void	printFloat(void) const;
		void    printDouble() const;

};
std::ostream&   operator<<(std::ostream& o, Convert const& i);

#endif