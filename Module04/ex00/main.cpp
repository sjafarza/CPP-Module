#include <iostream>
# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.cpp"


int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	/*const WrongAnimal* a = new WrongCat();
	std::cout << a->getType() << " " << std::endl;
	a->makeSound();
	WrongCat b;
	std::cout << b.getType() << " " << std::endl;
	b.makeSound();
	delete a;*/

	return (0);
}
