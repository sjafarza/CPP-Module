#include <iostream>
# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"


int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "******* instantiate clqss Animal********" <<std::endl;
	Animal	anim ;
	Animal	anim2 = Animal();
	std::cout << "***" <<std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "***************" <<std::endl;

	const WrongAnimal* a = new WrongAnimal();
	std::cout<<"1***"<< std::endl;
	const WrongAnimal* jj= new WrongCat();
	std::cout<<"***"<< std::endl;
	std::cout << "type : " << a->getType() << " for WrongAnimal " << std::endl;
	std::cout<<"2***"<< std::endl;
	std::cout << "type : " <<   jj->getType() << " for WrongCat " << std::endl;
	std::cout<<"3***"<< std::endl;
	a->makeSound();
	jj->makeSound();
	std::cout << "4***"<< std::endl;
	WrongCat b;
	std::cout << b.getType() << " " << std::endl;
	b.makeSound();
	std::cout << "*************deconstractors********************"<< std::endl;
	delete a;
	delete	jj;

	return (0);
}
