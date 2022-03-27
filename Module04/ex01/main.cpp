#include <iostream>
# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"


int main(void)
{
	Animal	*anim[10];
	Brain	*brain;

for(int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			anim[i] = new Cat();
		else
			anim[i] = new Dog();
		std::cout<<"TAB["<<i<<"] = " << anim[i]->getType() << std::endl;
	}
	brain = anim[0]->getBrain();
	brain->_ideas[0] = "i want loooo0ove !!";
	brain->_ideas[1] = "i want to eat, but i just did , why not eating again  !!";
	brain->_ideas[2] = "i want to go out and see some friends !!";
	for (int i = 0; i < 3; i++)
		std::cout<<anim[0]->getBrain()->_ideas[i]<<std::endl;
	*(anim[9]) = *(anim[0]);
	for ( int i = 0; i < 3; i++)
		std::cout<<anim[9]->getBrain()->_ideas[i]<<std::endl;
	*(anim[2]) = *(anim[0]);
	std::cout<<anim[2]->getBrain()->_ideas[0]<<std::endl;
	std::cout<<"*************** destruction *************"<<std::endl;
	for(int i = 0; i < 10; i++) 
	{
		std::cout<<"Array["<<i<<"]";
		delete anim[i];
	}
	return (0);
}
