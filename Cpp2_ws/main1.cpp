#include <iostream>

int main() {
    int arr[10]{1, 2, 1, 4, 5, 1, 5, 8, 1, 10};
    int repeated[10]{};

    int count{0};
    for (int i{0}; i < 10; i++) {
        for (int j{i + 1}; j < 10; j++) {
            if (arr[i] == arr[j]) {
                for (int k{0}; k < 10; k++)
                {
                    if (arr[i] == repeated[k]) {
                        continue;; // If already counted, skip to next iteration
                    }
                }
                count++;
            }
        }
        if (count > 0) {
            repeated[i] = arr[i]; // Store the repeated number
            std::cout << arr[i] << " is repeated " << (count + 1) << " times." << std::endl;
            count = 0; // Reset count for next number
        }
        
    }
    
    return 0;
}