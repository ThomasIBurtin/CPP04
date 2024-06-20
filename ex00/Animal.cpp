#include "Animal.hpp"

Animal::Animal() : _type("toto")
{
	std::cout << "default constructor animal" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "name constructor animal" << std::endl;
}

Animal::Animal(const Animal &model)
{
	*this = model;
}

Animal& Animal::operator=(const Animal &model)
{
	this->_type = model._type;
	return *this;
}

Animal::~Animal()
{

}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Animal makesound called" << std::endl;
}