#include <iostream>

int main() {
    int arr[10]{};

    for (int i{0}; i < 10; i++)
    {
        std::cout << "Enter number " << i << " : ";
        std::cin >> arr[i];
    }
    
    int max{arr[0]};
    int min{arr[0]};
    for (int i{1}; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << "The largest number is: " << max << std::endl;
    std::cout << "The smalsest number is: " << min << std::endl;
    
    return 0;
}