#include <iostream>
#include <memory>

class Dog;

class Person
{
    private:
        std::string name;
        std::shared_ptr<Dog> dog;
    public:
        Person(std::string _name): name(_name) {}
        void setDog(std::shared_ptr<Dog> _dog)
        {
            dog = _dog;
        }
        std::string getName() const
        {
            return name;
        }
        ~Person() 
        {
            std::cout << "Person object is deleted..." << std::endl;
        }
};

class Dog
{
    private:
        std::string name;
        std::weak_ptr<Person> owner;
    public:
        Dog(std::string _name): name(_name) {}
        void setOwner(std::shared_ptr<Person> _owner)
        {
            owner = _owner;
        }
        void showOwner();
        ~Dog() 
        {
            std::cout << "Dog object is deleted... " << std::endl;
        }
};

void Dog::showOwner()
{
    if (auto p = owner.lock())
        std::cout << "Dog " << name << " has owner " << p->getName() << std::endl;
    else
        std::cout << "Dog " << name << " has no owner " << std::endl;

}

int main() {
    std::shared_ptr<Person> sptr_person = std::make_shared<Person>("Ahmed");
    std::shared_ptr<Dog> sptr_dog = std::make_shared<Dog>("Jax");

    sptr_person->setDog(sptr_dog);
    sptr_dog->setOwner(sptr_person);

    sptr_dog->showOwner();

    return 0;
}