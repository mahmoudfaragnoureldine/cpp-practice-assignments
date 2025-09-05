/*Write a code that asks the user to enter 5 value and store
 them in an array then Calculates the summation of this
 array using a pointer on its first element*/

#include <iostream>

int main() {
    int array[5] = {0};
    int* array_ptr = array;
    int sum {0};
    
    std::cout << "Please enter 5 values to get the sum of them" << std::endl;

    for (int i {0}; i < 5; i++)
    {
        std::cout << "enter number " << i << ": ";
        std::cin >> array[i];
    }
    
    for (int i {0}; i < 5; i++)
    {
        sum += array_ptr[i];
    }

    std::cout << "The sum of the entered 5 numbers is: " << sum << std::endl;

    return 0;
}