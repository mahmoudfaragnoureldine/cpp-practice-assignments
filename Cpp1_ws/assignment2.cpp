#include <iostream>

int main() {
    int number[5];
    std::cout << "Please enter 5 numbers, each separated by white space: ";
    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
    
    int max_number{number[0]};
    for (int i = 1; i < 5; i++) {
        if (number[i] > max_number)
            max_number = number[i];
    }
    std::cout << "The maximum number in the entered numbers is: " << max_number << std::endl;
    
    return 0;
}