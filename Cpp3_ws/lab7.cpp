/*Write a code that defines a vector of 5 strings then create
 a pointer to vector and use this pointer to print these 5
 element with the vector method*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> vec {"Waleed", "Ahmeed", "Khalid", "Hamada", "Mohammed"};
    std::vector<std::string>* ptr = &vec;

    for (int i {0}; i < ptr->size(); i++)
    {
        std::cout << ptr->at(i) << std::endl;
    }
    
    return 0;
}