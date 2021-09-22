#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main()
{
	AAnimal *animal = new AAnimal();
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	animal->makeSound();
	dog->makeSound();	
	cat->makeSound();

	std::cout << "type: " << animal->getType() << std::endl;
	std::cout << "type: " << dog->getType() << std::endl;
	std::cout << "type: " << cat->getType() << std::endl;

	WrongAAnimal *wrongcat = new WrongCat();

	wrongcat->makeSound();

	delete wrongcat;
	delete animal;
	delete dog;
	delete cat;
	return (0);
}