/* write a c++ code to scan from user his full name and convert it to 
upper case then compare it with lower case */

#include <iostream>
#include <cstring>

int main() {
    char str[50];
    char str2[50];

    std::cout << "Enter your full name: ";
    std::cin.getline(str, 50);

    std::cout << "Your full name is " << str << std::endl;

    for (int i{0}; i < 35; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    

    strcpy(str2, str);
    if (! strcmp(str, str2))
    {
        std::cout << str << " and " << str2 << " are the same" << std::endl;
    }

    for (int i{0}; i < 35; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    
    for (int i{0}; i < sizeof(str); i++)
    {
        str[i] = toupper(str[i]);
    }

    std::cout << "Your full name is " << str << std::endl;

    for (int i{0}; i < 35; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;

    if (strcmp(str, str2))
    {
        std::cout << str << " and " << str2 << " are diffrent" << std::endl;
    }

    for (int i{0}; i < 35; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;

    std::cout << "Result of comparing " << str2 << " and " << str << ": " << strcmp(str2, str) << std::endl; 
    std::cout << "Result of comparing " << str << " and " << str2 << ": " << strcmp(str, str2) << std::endl;

    return 0;
}