#include <iostream>

class Person
{
    private:
        std::string name;
        int age;
        std::string country;
    public:
        Person(): name("Null"), age(0), country("Null") {}
        void set_name(std::string name) { this->name = name; }
        void set_age(int age) { this->age = age; }
        void set_country(std::string country) { this->country = country; }
        std::string get_name() const { return name; }
        int get_age() const { return age; }
        std::string get_country() const { return country; }
};

int main() {
    Person person1;
    person1.set_name("Mahmoud");
    person1.set_age(24);
    person1.set_country("Egypt");
    std::cout << "Name: " << person1.get_name() << std::endl;
    std::cout << "Age: " << person1.get_age() << std::endl;
    std::cout << "Country: " << person1.get_country() << std::endl;
    
    return 0;
}