#include <iostream>

int main() {
    int number[10];
    int search{0};
    bool found{false};
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Please enter number " << (i + 1) << ": ";
        std::cin >> number[i];
    }

    std::cout << "Please enter a number to search for: ";
    std::cin >> search;

    for (int i = 0; i < 10; i++ ) {
        if (number[i] == search) {
            std::cout << "The number you entered is at postion: " << (i + 1) << std::endl;
            found = true;
            break;
        }
    }

    if (! found) {
        std::cout << "Number not exist!" << std::endl;
    }

    return 0;
}