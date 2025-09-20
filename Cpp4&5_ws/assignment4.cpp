#include <iostream>

class Student
{
    private:
        std::string name;
        char Class;
        int rollNumber;
        int marks;
    public:
        Student(): name("Null"), Class('\0'), rollNumber(0), marks(0) {}
        Student(std::string name, char Class, int rollNumber, int marks)
        {
            this->name = name;
            this->Class = Class;
            this->rollNumber = rollNumber;
            this->marks = marks;
        }
        void getStudent() const
        {
            std::cout << "Student details: \n";
            std::cout << "Name: " << name << std::endl;
            std::cout << "Class: " << Class << std::endl;
            std::cout << "Roll Number: " << rollNumber << std::endl;
            std::cout << "Marks [0 - 100]: " << marks << std::endl;
        }

};

int main() {
    Student student1("Mahmoud Farag", 'A', 4, 98);
    student1.getStudent();

    return 0;
}