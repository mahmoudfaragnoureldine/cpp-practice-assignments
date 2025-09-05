/* Write a code that asks the user to enter the result of 3 * 4
 in case the user entered the correct answer the program
 will print Thanks, otherwise the program will print try again
 til the user enters the correct answer */

#include <iostream>

int main() {
    int result{0};

    do
    {
        std::cout << "3 * 4 = ";
        std::cin >> result;

    } while (result != 12);
    
    std::cout << "Thanks." << std::endl;

    return 0;
}