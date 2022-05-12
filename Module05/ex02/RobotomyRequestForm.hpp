#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class RobotomyRequestForm : public Form
{
	private:

	std::string _target;
	void	beExecuted() const;

	public:

	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);

	RobotomyRequestForm &operator=(const RobotomyRequestForm& other);

	void execute(Bureaucrat const& executor) const;

	std::string getTarget() const;
};

#endif