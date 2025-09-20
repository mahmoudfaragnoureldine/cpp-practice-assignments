#include <iostream>

class Animal
{
    public:
        virtual void makeSound() const = 0;
};

class Dog: public Animal
{
    public:
        void makeSound() const override
        {
            std::cout << "Woof Woof" << std::endl;
        }
};

class Cat: public Animal
{
    public:
        void makeSound() const override
        {
            std::cout << "Meow" << std::endl;
        }
};

class Bird: public Animal
{
    public:
        void makeSound() const override
        {
            std::cout << "Tweet! Tweet!" << std::endl;
        }
};

int main() {
    Dog dog;
    Cat cat;
    Bird bird;

    dog.makeSound();
    cat.makeSound();
    bird.makeSound();

    return 0;
}