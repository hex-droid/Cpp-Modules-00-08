#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

/* int		main()
{
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	Brain	*brain = new Brain("Haw Haw");
	Brain	*brain2 = new Brain("Meow!");

	dog->sayIdeas();
	cat->sayIdeas();

	dog->setBrain(brain);
	cat->setBrain(brain2);

	dog->sayIdeas();
	cat->sayIdeas();

	Cat *copycat = new Cat(*cat);
	Dog *copydog = new Dog(*dog);

	std::cout << "Cat brainz address: " << brain2 << std::endl;
	std::cout << "Copycat brainz address: " << copycat->getBrainAddress() << std::endl; 

	copycat->sayIdeas();

	std::cout << "Dog brainz address: " << brain << std::endl;
	std::cout << "Copydog brainz address: " << copydog->getBrainAddress() << std::endl;

	copydog->sayIdeas();

	delete dog;
	delete cat;
	delete copycat;
	delete copydog;
	return (0);
} */

/* int		main()
{
	int N=10;
	AAnimal *zoo[N];

	for (int i=0;i<N/2;i++)	
	{	
		zoo[i] = new Dog();
		zoo[i]->makeSound();
	}
	for(int i=N/2;i < N;i++)
	{
		zoo[i] = new Cat();
		zoo[i]->makeSound();
	}

	for (int i =0; i < N; i++)
		delete zoo[i];
	return 0;
} */

/* int		main()
{
	int	N=10;
	std::cout<<"------------------0"<<std::endl;
	AAnimal	*dog = new AAnimal[N];
	std::cout<<"------------------1"<<std::endl;
//	dog = new Dog();
	for(int i=0;i<N;i++)
		(&dog[i]) = new Dog();
	std::cout<<"------------------2"<<std::endl;

	std::cout<<"------------------3"<<std::endl;
//	std::cout<<"---";(dog)->getType();
	std::cout<<"------------------4"<<std::endl;
//	dog->makeSound();
	std::cout<<"------------------5"<<std::endl;
	delete [] dog;
	std::cout<<"------------------6"<<std::endl;
	return 0;
} */

/* int		main()
{
	std::cout<<"------------------1"<<std::endl;
	AAnimal *dog = new Dog();
	std::cout<<"------------------2"<<std::endl;
	dog->getType();
	std::cout<<"------------------3"<<std::endl;
	dog->makeSound();
	std::cout<<"------------------4"<<std::endl;
	delete dog;
	std::cout<<"------------------5"<<std::endl;
	return 0;
} */

/*
*/