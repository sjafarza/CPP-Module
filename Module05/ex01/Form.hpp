#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
class Form
{
    private:

        const std::string    _name;
        bool                _signed;
        const int           _sigGrade;
        const int           _exeGrade;


    public:
        Form();
        ~Form();
        Form(std::string name, int sigGrade, int exeGrade);
        Form(const Form& other);

        Form&   operator=(const Form& other);

        //********get()**************************

        std::string     getName() const;
        bool            getSigned() const;
        int             getSigGrade() const;
        int             getExeGrade() const;

        //***********methodes**************************

        void    beSigned()



};

#endif