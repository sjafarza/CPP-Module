#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;  
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rval)
{
    return(*this);
}

 std::string const Bureaucrat::getName() const
 {
     return (_name);
 }

int              Bureaucrat::getGrade() const
{
    return (_grade);
}

void             Bureaucrat::downGrade()
{
    if (_grade + 1 > 150)
        throw   GradeTooLowException();
    _grade++;    

}

void               Bureaucrat::upGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;    
}

std::ostream&   operator<<(std::ostream& o, Bureaucrat const& i)
{
    o << i.getName() << " , bureaucrat Grade : " << i.getGrade() << std::endl;
    return (o);
}

