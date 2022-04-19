#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
# include <ctime>
# include <fstream>

class   Bureaucrat;

class Form
{
    private:

        const std::string    _name;
        bool                _signed;
        const int           _sigGrade;
        const int           _exeGrade;


    public:
        Form();
        virtual ~Form() = 0;
        Form(std::string name, int sigGrade, int exeGrade);
        Form(const Form& other);

        Form&   operator=(const Form& other);

        //********get()**************************

        std::string     getName() const;
        bool            getSigned() const;
        int             getSigGrade() const;
        int             getExeGrade() const;

        //***********methodes**************************

        virtual void    beSigned(Bureaucrat b);
        virtual void execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException: public std::exception
        {
            public:
            
            virtual const char* what() const throw()
            {
                return("Form : Grade is Too High ! ");
            }

        };

        class GradeTooLowException: public std::exception
        {
            public :
            
            virtual const char* what() const throw()
            {
                return ("Form : Grade is Too Low ! ");
            }

        };

        class NotSignedException : public std::exception
	{
		public :
			virtual const char *what() const throw()
            {
                return ("Form not signed");
            }
	};
};

std::ostream& operator<<(std::ostream& o, Form const& i);

#endif