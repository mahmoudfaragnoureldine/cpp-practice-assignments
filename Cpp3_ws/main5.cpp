#include <iostream>

int main(){
    int array[2][3] = {0};

    std::cout << "Enter :";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> array[i][j];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j];
        }
        std::cout << std::endl;
    }
    

    return 0;
}