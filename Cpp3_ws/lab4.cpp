/*Write a program that pass an array of three strings to a  function 
(“Red”,”Blue”,”Black”) and print it using the function*/

#include <iostream>
#include <string>

void print(const std::string* ptr) {
    for (int i {0}; i < 3; i++)
    {
        std::cout << ptr[i] << std::endl;
    }
    
}

int main() {
    std::string array[3];

    for (int  i = 0; i < 3; i++)
    {
        std::cout << "Please enter a color: " << std::endl;
        std::cin >> array[i];
    }
    std::cout << std::endl;

    print(array);
    
    return 0;
}