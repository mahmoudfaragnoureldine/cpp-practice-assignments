#include <iostream>

class Person
{
    private:
        std::string name;
        int ID;
        int age;
        std::string gender;
        std::string country;
    public:
        void setName(std::string name) { this->name = name; }
        void setAge(int age) { this->age = age; }
        void setID(int ID) { this->ID = ID; }
        void setGender(std::string gender) { this->gender = gender; }
        void setCountry(std::string country) { this->country = country; }
        void dispalyData() const {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "ID: " << ID << std::endl;
            std::cout << "Gender: " << gender << std::endl;
            std::cout << "Country: " << country << std::endl;
        }

};

class Student : public Person
{
    private:
        std::string course;
        double fees;
    public:
        void setCourse(std::string course) { this->course = course; }
        void setFees(double fees) { this->fees = fees; }
        void displayData() const {
            std::cout << "Course: " << course << std::endl;
            std::cout << "Fees: " << fees << std::endl;
        }
};

int main() {
    Student student1;
    student1.setName("Mahmoud Farag");
    student1.setAge(24);
    student1.setID(110);
    student1.setGender("Male");
    student1.setCountry("Egypt");
    student1.setCourse("CPP");
    student1.setFees(5000.5);

    student1.dispalyData();
    student1.displayData();

    return 0;
}