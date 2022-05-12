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
    std::cout << " *1*   Test to instants "<< std::endl;
    try
    {
        /*******Bureaucrat********************/
        Bureaucrat b1("B1", 147);
        Bureaucrat b2("B2", 1);
        Bureaucrat b3("B3", 144);
       /************Form *************************/
        ShrubberyCreationForm	sh("SH");
	    RobotomyRequestForm		rb("RB");
	    PresidentialPardonForm	P("pardon");
	    PresidentialPardonForm	P2(P);

        std::cout << " *2*   Test to Formes ShrubberyCreationForm"<< std::endl;

        // *********b1.grade = 147 & sh.SingGrade = 145 , 147  NOT<= 145      Throw
        //sh.beSigned(b1);

        //********b2.grade = 1 & sh.SingGrade = 1 , 147 <= 145     Ok
        sh.beSigned(b2);
        sh.execute(b2);
        std::cout << "You could see result for ShrubberyCreationForm by * cat SH_shrubbery  *."<< std::endl;

       std::cout << "\n *3*   Test to Formes RobotomyRequestForm	"<< std::endl;
       //rb.beSigned(b1); /* if  1 throw , ShrubberyCreationForm*/
       //rb.beSigned(b1); /* if  2 throw , NotSignedException();*/
       rb.beSigned(b2);
       rb.execute(b2);

       std::cout << "\n *4*   Test to Formes PresidentialPardonForm	"<< std::endl;
       //P.beSigned(b1); /* b1(147) Not<= P(25) so Throw */
       P.beSigned(b2);
       P.execute(b2);
       P2.execute(b3);

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
    catch(Form::NotSignedException& e)
    {
        std::cerr << e.what() << std::endl;
    }
     
}