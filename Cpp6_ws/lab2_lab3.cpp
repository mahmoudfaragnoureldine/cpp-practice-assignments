#include <iostream>

class Person
{
    protected:
        std::string name;
        int ID;
        int age;
        std::string gender;
        std::string country;
    public:
        Person(std::string name = "Null", int ID = 0, int age = 0, std::string gender = "Null", std::string country = "null")
        {
            this->name = name;
            this->ID = ID;
            this->age = age;
            this->gender = gender;
            this->country = country;
        }
        Person(const Person& other)
        {
            std::cout << "Person Copy Constractor..." << std::endl;
            name = other.name;
            ID = other.ID;
            age = other.age;
            gender = other.gender;
            country = other.country;
        }
        Person(Person&& other)
        {
            std::cout << "Person Move Constractor..." << std::endl;
            other.name = "Null";
            other.ID = 0;
            other.age = 0;
            other.gender = "Null";
            other.country = "Null";
        }
        void operator=(const Person& other)
        {
            std::cout << "Operator= copy ..." << std::endl;
            name = other.name;
            ID = other.ID;
            age = other.age;
            gender = other.gender;
            country = other.country;
        }
        void setName(std::string name) { this->name = name; }
        void setAge(int age) { this->age = age; }
        void setID(int ID) { this->ID = ID; }
        //void setGender(std::string gender) { this->gender = gender; }
        //void setCountry(std::string country) { this->country = country; }
        void dispalyData() const {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "ID: " << ID << std::endl;
            std::cout << "Gender: " << gender << std::endl;
            std::cout << "Country: " << country << std::endl;
        }

};

class Employee : public Person
{
    private:
        std::string job_title;
        double salary;
    public:
        Employee(std::string name = "Null", int ID = 0, int age = 0, std::string gender = "Null", std::string country = "null", std::string job_title = "Null", double salary = 0.0)
        {
            Person(name, ID, age, gender, country);
            this->job_title = job_title;
            this->salary = salary; 
        }
        Employee(const Employee& other): Person(other)
        {
            std::cout << "Employee Copy Constractor..." << std::endl;
            job_title = other.job_title;
            salary = other.salary; 
        }
        Employee(Employee&& other): Person(std::move(other))
        {
            std::cout << "Employee Move Constractor..." << std::endl;
            job_title = other.job_title;
            salary = other.salary; 
        }
        Employee& operator=(const Employee& rhv)
        {
            Person::operator=(rhv);
            std::cout << "Employee Copy Operator =..." << std::endl;
            job_title = rhv.job_title;
            salary = rhv.salary; 
        }
        Employee& operator=(Employee&& rhv)
        {
            Person::operator=(std::move(rhv));
            std::cout << "Employee Move Operator =..." << std::endl;
            job_title = rhv.job_title;
            salary = rhv.salary; 
        }
        void set_job_title(std::string job) { job_title = job; }
        void set_salary(double salary) { this->salary = salary; }
        void display() const {
            std::cout << "Job title: " << job_title << std::endl;
            std::cout << "Salary: " << salary << std::endl;
        }
};
