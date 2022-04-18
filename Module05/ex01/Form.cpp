#include "Form.hpp"

Form::Form() : _name("unnamed form"), _signed(0), _sigGrade(150), _exeGrade(150)
{

}

Form::~Form()
{
    std::cout << "Destroyed : " << _name << std::endl;
}

 Form::Form(std::string name, int sigGrade, int exeGrade): _name(name), _signed(0), _sigGrade(sigGrade), _exeGrade(exeGrade)
{
    if (sigGrade < 1 || exeGrade < 1)
    
        throw Form::GradeTooHighException();
    else if (sigGrade > 150 || exeGrade > 150)
        throw Form::GradeTooLowException();
}

 Form::Form(const Form& other): _name(other._name), _signed(other._signed), _sigGrade(other._sigGrade), _exeGrade(other._exeGrade)
 {

 }

 Form&   Form::operator=(const Form& other)
 {
     return(*this);
 }

 //********get()**************************

std::string     Form::getName() const
{
    return (_name);
}

bool            Form::getSigned() const
{
    return (_signed);
}

int             Form::getSigGrade() const
{
    return (_sigGrade);
}

int             Form::getExeGrade() const
{
    return (_exeGrade);
}

//***********methodes**************************

void    Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= _sigGrade)
        _signed = 1;
    else
        throw   Form::GradeTooLowException();
        
}

std::ostream&   operator<<(std::ostream& o, Form const& i)
{
    o << i.getName() << std::endl;
    o << i.getSigned() << std::endl;
    o << i.getSigGrade() << std::endl;
    o << i.getExeGrade() << std::endl;

    return (o); 
}


