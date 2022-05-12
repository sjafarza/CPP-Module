#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    std::cout << " *1*   Test to instants "<< std::endl;
    try
    {
        /*******Bureaucrat********************/
        Bureaucrat n("normal", 4);
        Bureaucrat max("max", 1);
        Bureaucrat min("min", 150);
       // Bureaucrat h("big", 154);
       // Bureaucrat l("smal", 0);

       /************Form*************************/
       Form     f("form1", 43, 42);
       //Form     fh("formH", 0, 0);
       std::cout << "sign of " << f.getName() << " withe sigGrade of " << f.getSigGrade() << " is " << f.getSigned() << std::endl;
        Bureaucrat bForSig("b", 42);
        bForSig.sigForm(f);
        std::cout << "2 sign of " << f.getName() << " withe sigGrade of " << f.getSigGrade() << " is " << f.getSigned() << std::endl;

        std::cout << "***chek form non signed***" << std::endl;
        Form     fl("forml", 44, 42);
       std::cout << "sign of " << fl.getName() << " withe sigGrade of " << fl.getSigGrade() << " is " << fl.getSigned() << std::endl;
        Bureaucrat bl("bl", 48);
        bl.sigForm(fl);
        std::cout << "2 sign of " << fl.getName() << " withe sigGrade of " << fl.getSigGrade() << " is " << fl.getSigned() << std::endl;

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