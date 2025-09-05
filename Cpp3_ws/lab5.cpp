/*Write a C++ code to swap two numbers using Reference*/

#include <iostream>

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 {100};
    int num2 {200};

    std::cout << "Before swap: " << std::endl;
    std::cout << "number 1 = " << num1 << "  |  number 2 = " << num2 << std::endl;

    swap(num1, num2);

    std::cout << "After swap: " << std::endl;
    std::cout << "number 1 = " << num1 << "  |  number 2 = " << num2 << std::endl;

    return 0;
}