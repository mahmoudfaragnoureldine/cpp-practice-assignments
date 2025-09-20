#include <iostream>

class Person
{
    private:
     std::string name;
    public:
        Person(std::string _name): name(_name) {}
        std::string getName() const { return name; }

};

class Student: virtual public Person
{
    private:
        int studentID;
    public:
        Student(std::string _name, int _studentID): Person(_name), studentID(_studentID) {}
        int getStudentID() const { return studentID; }

};

class Teacher: virtual public Person
{
    private:
        int teacherID;
    public:
        Teacher(std::string _name, int _teacherID): Person(_name), teacherID(_teacherID) {}
        int getTeacherID() const { return teacherID; }
};

class TeachingAssistant: public Student, public Teacher
{
    private:
        std::string course;
    public:
        TeachingAssistant(std::string _name, int _studentID, int _teacherID, std::string _course): 
        Person(_name), Student(_name, _studentID), Teacher(_name, _teacherID), course(_course) {}
        std::string getCourse() const { return course; }
};

int main() {
    Student s("Ahmed", 101);
    std::cout << "Student Name: " << s.getName() << std::endl;
    std::cout << "Student ID: " << s.getStudentID() << std::endl;

    Teacher t("Mohammed", 12012);
    std::cout << "Teacher Name: " << t.getName() << std::endl;
    std::cout << "Teacher ID: " << t.getTeacherID() << std::endl;

    TeachingAssistant ta("Mahmoud", 1313, 13013, "C++ Programming");
    std::cout << "Teacher Assistant Name: " << ta.getName() << std::endl;
    std::cout << "Teacher Assistant Teacher ID: " << ta.getTeacherID() << std::endl;
    std::cout << "Teacher Assistant Student ID: " << ta.getStudentID() << std::endl;
    std::cout << "Teacher Assistant Course: " << ta.getCourse() << std::endl;

    return 0;
}