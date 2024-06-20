#include "Animal.hpp"

Animal::Animal() : _type("toto")
{
	
}
Animal::Animal(std::string type) : _type(type)
{
	
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