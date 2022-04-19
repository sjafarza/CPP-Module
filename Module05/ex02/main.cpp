#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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
}