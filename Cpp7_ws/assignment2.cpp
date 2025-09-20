#include <iostream>
#include <vector>

class Animal
{
    protected:
        std::string name;
        int age;
    public:
        Animal(std::string _name, int _age): name(_name), age(_age) {}
        virtual void makeSound() const = 0;
        virtual void displayInfo() const = 0;
};

class Mammal: public Animal
{
    private:
        std::string color;
    public:
        Mammal(std::string _name, int _age, std::string _color): Animal(_name, _age), color(_color) {}
        void makeSound() const override
        {
            std::cout << "Mammal: " << name << " is making sound." << std::endl;
        }
        void displayInfo() const
        {
            std::cout << "Name: " << name << ", Age: " << age << " years, Color: " << color << std::endl;
        }
};

class Bird: public Animal
{
    private:
        double wingspan;
    public:
        Bird(std::string _name, int _age, double _wingspan): Animal(_name, _age), wingspan(_wingspan) {}
        void makeSound() const override
        {
            std::cout << "Bird: " << name << " is making sound." << std::endl;
        }
        void displayInfo() const
        {
            std::cout << "Name: " << name << ", Age: " << age << " years, Wingspan: " << wingspan << " meters" << std::endl;
        }
};

class Reptile: public Animal
{
    private:
        bool hasShell;
    public:
        Reptile(std::string _name, int _age, bool _hasShell): Animal(_name, _age), hasShell(_hasShell) {}
        void makeSound() const override
        {
            std::cout << "Reptile: " << name << " is making sound." << std::endl;
        }
        void displayInfo() const
        {
            std::cout << "Name: " << name << ", Age: " << age << " years, Has Shell: " << (hasShell ? "yes" : "no")  << std::endl;
        }
};

int main() {
    Mammal m("Lion", 5, "Golden");
    Bird b("Eagle", 10, 2.5);
    Reptile r("Turtle", 20, true);
    std::vector<Animal*> animals = {&m, &b, &r};

    for (auto &i : animals)
    {
        i->makeSound();
        i->displayInfo();
    }
    
    return 0;
}