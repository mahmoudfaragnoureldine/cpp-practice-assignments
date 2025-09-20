#include <iostream>
#include <memory>

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person(std::string _name, int _age): name(_name), age(_age) {}
        void introduce() const {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
        }
};

int main() {
   /* Person* ptr = new Person("Waleed", 25);
    std::unique_ptr<Person> uptr(ptr);
    std::shared_ptr<Person> sptr(ptr);

    sptr->introduce();
    uptr->introduce();
    */

    std::shared_ptr<Person> sptr = std::make_shared<Person>("Waleed", 24);
    std::weak_ptr<Person> wptr = sptr;

    if (auto locked = wptr.lock())
        locked->introduce();
    else
        std::cout << "Object no longer exist." << std::endl;


    return 0;
}