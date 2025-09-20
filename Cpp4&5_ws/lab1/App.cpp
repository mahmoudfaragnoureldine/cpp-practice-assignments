#include "Dog.h"

int main() {
    CPP::Dog dog1;
    std::cout << dog1.getName() << std::endl;
    std::cout << dog1.getAge() << std::endl;
    std::cout << "*****************************\n";
    CPP::Dog dog2{"Fedo", 4};
    std::cout << dog2.getName() << std::endl;
    std::cout << dog2.getAge() << std::endl;
    CPP::Dog dog3{"Spot", 5};
    std::cout << dog3.getName() << std::endl;
    std::cout << dog3.getAge() << std::endl;
    std::cout << "*****************************\n";
    CPP::Dog twin(dog3);
    std::cout << twin.getName() << std::endl;
    std::cout << twin.getAge() << std::endl;
    std::cout << "*****************************\n";
    dog1.setName("Mike");
    dog1.setAge(7);
    std::cout << dog1.getName() << std::endl;
    std::cout << dog1.getAge() << std::endl;

    return 0;
}