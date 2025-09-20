/*Design pattern*/

#include <iostream>
#include <vector>

class Employee
{
    private:
        std::string _name;
        int _age;
        double _salary;
    public:
        Employee(std::string name, int age, double salary): _name(name), _age(age), _salary(salary) {}
        std::string getName() { return _name; }
        void setSalary(double salary) 
        {
            _salary = salary;
        }
        void display() 
        {
            std::cout << "Name: " << _name << std::endl;
            std::cout << "Age: " << _age << std::endl;
            std::cout << "Salary: " << _salary << std::endl;
            std::cout << "-----------------------------------\n" ;
        }
};

class Compony 
{
    private:
        std::vector<Employee*> employees;
    public:
        void AddEmployee(Employee* employee)
        {
            employees.push_back(employee);
        }
        void UpdateEmployee(std::string name, double new_salary)
        {
            for (int i = 0; i < employees.size(); i++)
            {
                if (employees[i]->getName() == name)
                {
                    employees[i]->setSalary(new_salary);
                }
                
            }
            
        }
        void RemoveEmployee(std::string name)
        {
            for (int i = 0; i < employees.size(); i++)
            {
                if (employees[i]->getName() == name)
                {
                    employees.erase(employees.begin() + i);
                }
                
            }
            
        }
        void show() 
        {
            for (auto employee : employees)
            {
                employee->display();
            }
            
        }
};

int main() {
    Employee emp1("Waleed", 24, 18000);
    Employee emp2("Neama", 24, 20000);
    Employee emp3("Zenia", 10, 2000);

    Compony compony;
    compony.AddEmployee(&emp1);
    compony.AddEmployee(&emp2);
    compony.AddEmployee(&emp3);

    compony.show();

    std::cout << "********************************\n";

    compony.RemoveEmployee("Zenia");
    compony.UpdateEmployee("Neama", 30000);
    compony.show();
    return 0;
}