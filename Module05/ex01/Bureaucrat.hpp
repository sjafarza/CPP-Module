#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include <exception>


class Bureaucrat
{
    private:
        std::string const _name;
        int                _grade;

    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat& other);

        Bureaucrat& operator=(const Bureaucrat& rval);

        std::string const getName() const;
        int               getGrade() const;

        void               downGrade();
        void               upGrade();   

        class GradeTooHighException: public std::exception
        {
            public :

            virtual const char* what() const throw()
            {
                return ("GradeTooHighException");
            }

        };

        class GradeTooLowException: public std::exception
        {
            public :
            
            virtual const char* what() const throw()
            {
                return ("GradeTooLowException");
            }

        };

};
std::ostream&   operator<<(std::ostream& o, Bureaucrat const& i);

#endif