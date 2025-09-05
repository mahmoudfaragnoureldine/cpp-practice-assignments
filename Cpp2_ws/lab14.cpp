/*write a c++ code to scan from user his first name and last name 
then count the number of chartres and print welcome message*/

#include <iostream>
#include <cstring>

int main() {
    char firstName[10];
    char lastName[10];

    std::cout << "Please enter your first name : ";
    std::cin >> firstName;
    std::cout << "Please enter your last name : ";
    std::cin >> lastName;

    for (int i{0}; i < 35; i++)
        std::cout << "-";
    std::cout << std::endl;
    

    std::cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters\n";
    std::cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters\n";

    strcat(firstName, " ");
    
    std::cout << "Your fill name is " << strcat(firstName, lastName) << std::endl;

    return 0;
}