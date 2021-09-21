#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int		main()
{
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();
	Brain	*brain = new Brain("some random idea from outer space");

	dog->sayIdeas();
	cat->sayIdeas();

	dog->setBrain(brain);

	dog->sayIdeas();


	delete dog;
	delete cat;
	return (0);
}