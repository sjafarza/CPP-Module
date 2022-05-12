#ifndef SHRUBBERYCREATIONFORM_HPP
# define    SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class ShrubberyCreationForm : public Form
{
	private:

	std::string _target;
	void	beExecuted() const;

	public:
	
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

	
	void execute(Bureaucrat const& executor) const;

	std::string getTarget() const;
};

#endif  