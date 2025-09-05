#include <iostream>

int main() {
    int age{};
    std::cout << "Welcome to driving check system" << std::endl;
    std::cout << "Please enter your age to check if you can drive or not: ";
    std::cin >> age;

    if (age >= 16) {
        std::cout << "You are eligible to drive." << std::endl;
    } else {
        std::cout << "You are not eligible to drive." << std::endl;
    }
    
    return 0;
}