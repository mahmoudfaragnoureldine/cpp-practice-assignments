#include <iostream>

int main() {
    int arr[10]{}; 

    for (int i{0}; i < 10; i++) {
        std::cout << "Enter number " << i + 1 << " : ";
        std::cin >> arr[i]; 
    }

    std::cout << "The numbers you entered in reverse order are: " << std::endl;

   /* for (int i{9}; i >= 0; i--)
    {
        std::cout << arr[i] << std::endl;  
    }*/

    // Reversing the array using a single loop
   /* for (int i{0}; i < 5; i++)
    {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }*/

    // Reversing the array using two pointers
    // One pointer starts at the beginning, the other at the end
    int i{0};
    int j{9};
    while (i < j) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    {
        /* code */
    }
    

    for (int i{0}; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;  
    }
    
    
}