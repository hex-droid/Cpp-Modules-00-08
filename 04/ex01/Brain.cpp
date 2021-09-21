#include "Brain.hpp"

Brain::Brain(std::string const &placeholder)
{
	std::cout << "Parametric Brain Constructor" << std::endl;
	newFill(placeholder);
}

Brain::Brain(void)
{
	std::cout << "Brain Constructor" << std::endl;
	newFill("-");
}

Brain::~Brain(void)
{
	delete [] ideas;
	std::cout << "Brain Destructor" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		this->ideas = rhs.ideas;
	}
	return *this;
}

Brain::Brain(Brain const &rhs)
{
	*this = rhs;
}

void	Brain::debugg(void)
{
	for(int i=0;i<99;i++)
	{
		std::cout<<"["<<ideas[i]<<"], ";
	}
	std::cout<<"["<<ideas[99]<<"]"<<std::endl;
}

void	Brain::newFill(std::string const &placehoder)
{
	ideas = new std::string[100];
	for (int i=0;i<100; i++)
	{	
		ideas[i].append(placehoder);
	}
}