#include <iostream>
#include <vector>

int main() {
    int numbers[10];
    int buble_sort[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Please enter number " << i << " : ";
        std::cin >> numbers[i];
    }

    std::cout << "Values after sorting are: ";
    
    for (int i{0}; i < 10; i++) {
        int min = numbers[i];
        for (int j{0}; j < 10; j++) {
            if (numbers[i] < min) {
            min = numbers[i];
        }
        }
        std::cout << min << std::endl;
    }

    return 0;
}