#include <iostream>

int main() {
    int numbers[5];
    double avg{};
    std::cout << "Please enter 5 integer numbers separated by white space: " << std::endl;
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    avg = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4]) / 5.0;
    std::cout << "The average is: " << avg << std::endl;
    
    return 0;
}