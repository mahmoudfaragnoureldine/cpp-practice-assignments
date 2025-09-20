#include "Dog.h"

CPP::Dog::Dog(): _name("None"), _age(0) // Dog("no", 0) delegation constractot
{
    std::cout << "Call from default constractor...\n";
    //_name = "None";
    //_age = 0;
}
CPP::Dog::Dog(std::string name, int age): _name(name), _age(age)
{
    std::cout << "Call from paramtrized constractor...\n";
    //_name = name;
    //_age = age;
}
CPP::Dog::Dog(const Dog& source): _name(source._name), _age(source._age)
{
    std::cout << "Call from copy constractor...\n";
}
void CPP::Dog::setName(std::string name)
{
    _name = name;
}
void CPP::Dog::setAge(int age)
{
    _age = age;
}
std::string CPP::Dog::getName()
{
    return _name;
}
int CPP::Dog::getAge()
{
    return _age;
}
CPP::Dog::~Dog()
{
    std::cout << "Call from destractour...\n";
}