#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* arrPtr[5] = {&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]}; 

    int* ptrMax = arrPtr[0];
    for (int i = 1; i < 5; ++i) {
        if (*arrPtr[i] > *ptrMax) {
            ptrMax = arrPtr[i];
        }
    }
    std::cout << "Max value: " << *ptrMax << std::endl;
    

    return 0;
}   