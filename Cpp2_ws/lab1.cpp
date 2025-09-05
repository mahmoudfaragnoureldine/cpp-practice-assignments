#include <iostream>

int main() {
    for (int i {0}; i < 100; i = i + 10)
    {
        for (int j {i + 1}; j <= (i + 10); j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}