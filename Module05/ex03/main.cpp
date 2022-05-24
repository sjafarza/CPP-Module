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
        Bureaucrat b1("B1", 4);
        Bureaucrat b2("B2", 1);
        Bureaucrat b3("B3", 150);

       /************Form*************************/
        Form	*f1; /*a27;*/
	    Form	*f2; /*b19;*/
	    Form	*f3; /*c42;*/
	    Form	*error;

        Intern	someIntern;

        f1 = someIntern.makeForm("shrubbery creation", "unknown");
		f2 = someIntern.makeForm("robotomy request", "robo");
		f3 = someIntern.makeForm("presidential pardon", "pre");
        /* we could test avec different f1 , f2 , f3 */
        b2.executeForm(*f2); 
	    b2.sigForm(*f1);
	    b2.executeForm(*f1);

        delete f1;
        delete f2;
        delete f3;

    }
    /*catch(Bureaucrat::GradeTooHighException& e)
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
    }*/

	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;

        delete f1;
        delete f2;
        delete f3;
	}
}