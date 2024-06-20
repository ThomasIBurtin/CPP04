#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "default constructor dog" << std::endl;
}

Dog::~Dog()
{

}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}