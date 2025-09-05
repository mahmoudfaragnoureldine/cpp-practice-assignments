#include <iostream>

int main() {
    int arr[10]{1, 2, 1, 4, 5, 1, 5, 8, 1, 10};

    for (int i{0}; i < 10; i++) {
        int count{1};
        for (int j{i + 1}; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = 0; // Mark as counted
            }
        }
        if (arr[i] != 0) { // Only print if not marked
            std::cout << arr[i] << " appears " << count << " times." << std::endl;
        }
    }
    return 0;
}