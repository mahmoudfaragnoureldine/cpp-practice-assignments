#ifndef CLASS_H
#define CLASS_H

#include <iostream>

namespace CPP 
{
    class person
{
    private:
        std::string _name;
        int _age;
        std::string _gender;
        std::string _countery;

    public:
        void setName(std::string name);
        void setAge(int age);
        void setGender(std::string gender);
        void setCountery(std::string countery);
        void showData();
};
}

#endif