#include <iostream>

int main() {
    int num{0};
    std::cout << "Please enter a number to count down from it : ";
    std::cin >> num;

    while (num >= 0)
    {
        std::cout << num << std::endl;
        num--;
    }
    
    return 0;
}