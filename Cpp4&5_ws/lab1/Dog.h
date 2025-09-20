#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>

namespace CPP 
{
    class Dog
    {
        private:
            std::string _name;
            int _age;
        public:
            Dog();
            Dog(std::string name, int age);
            Dog(const Dog& source);
            void setName(std::string name);
            void setAge(int age);
            std::string getName();
            int getAge();
            ~Dog();

    };
}

#endif