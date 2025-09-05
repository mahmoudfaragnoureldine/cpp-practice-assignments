/*Write a code that apply the bubble sorting algorithm on a
 set of numbers entered by the user. The code shall ask the
 user to enter the number of values to be sorted, then the
 code shall ask the user to enter the values and allocate
 them dynamically then print them in ascending order*/

#include <iostream>
#include <vector>

int main() {
    int* array_ptr {nullptr};
    int num{0};
    int size {0};

    std::cout << "Please enter the number of values to be stored : ";
    std::cin >> size;

    array_ptr = new int[size];
    std::vector<int> vec;

    for (int i {0}; i < size; i++)
    {
        std::cout << "Please enter number " << i << " : ";
        std::cin >> num;
        vec.push_back(num);
    }

    for (int i {0}; i < size; i++)
    {
        int min_number = vec[i];
        for (int j {i + 1}; j < size; j++)
        {
            if (vec[j] < min_number)
         {
            min_number = vec[j];
            int temp = vec[j];
            vec[j] = vec[i];
            vec[i] = temp;
         }
        }
        array_ptr[i] = min_number;
        
    }

    
    
    for (int i {0}; i < size; i++)
    {
        std::cout << array_ptr[i] << std::endl;
    }

    delete[] array_ptr;

    return 0;
}