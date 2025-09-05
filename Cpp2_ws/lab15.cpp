/* write a c++ code to scan from user his full name and print it*/

#include <iostream>
#include <cstring>

int main() {
    char fullName[30];

    std::cout << "Enter your full name: ";
    // std::cin >> fullName;  cin is senstive for " ", you must use getline method

    std::cin.getline(fullName, 50);

    std::cout << "Your full name is " << fullName << std::endl;

    return 0;
}