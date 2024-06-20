#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{

}

Cat::~Cat()
{

}

void Cat::MakeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}