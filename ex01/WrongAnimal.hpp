#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
    std::string _type;

    public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &model);
    WrongAnimal& operator=( const WrongAnimal& rhs );
    ~WrongAnimal();

    std::string getType() const;
	void makeSound() const;
};

#endif