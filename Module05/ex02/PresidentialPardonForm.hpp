#ifndef PRESIDENTIALPARDONFORM_HPP
# define    PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class PresidentialPardonForm : public Form
{
	private:

	std::string _target;
	void	beExecuted() const;

    public:

	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm& other);

	PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
	
	void execute(Bureaucrat const& executor) const;

	std::string getTarget() const;
};

#endif