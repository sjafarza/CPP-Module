#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Form.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

int main(void)
{
    std::cout << " *1*   Test to incrementing "<< std::endl;
    try
    {
        /*******Bureaucrat********************/
        Bureaucrat n("normal", 4);
        Bureaucrat max("max", 1);
        Bureaucrat min("min", 150);
       // Bureaucrat h("big", 154);
       // Bureaucrat l("smal", 0);

       /************Form*************************/

    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }

    /*std::cout << " *2*   Test to upgrade  & downgrade  normal "<< std::endl;
    try
    {
        Bureaucrat n("normal", 4);
        std::cout << n << std::endl;
        n.upGrade();
        std::cout << "after ungrade  : " << n << std::endl;
        n.downGrade();
        n.downGrade();
        std::cout << "after 2 downgrade  : " << n << std::endl;
        

    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << " *3*   Test to upgrade  & downgrade  for Max "<< std::endl;
    try
    {
        Bureaucrat m("max", 1);
        std::cout << m << std::endl;
        m.downGrade();
        m.downGrade();
        std::cout << "after 2 downgrade  : " << m << std::endl;
        m.upGrade();
        m.upGrade();
        //m.upGrade();
        std::cout << "after 2 upngrade  : " << m << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << " *4*   Test to upgrade  & downgrade  for Min "<< std::endl;
    try
    {
        Bureaucrat m("min", 150);
        std::cout << m << std::endl;
        m.downGrade();
        std::cout << "after downgrade  : " << m << std::endl;
        m.upGrade();
        m.upGrade();
        m.upGrade();
        std::cout << "after 2 upngrade  : " << m << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }*/
}