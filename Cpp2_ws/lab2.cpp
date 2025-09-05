#include <iostream>

int main() {
    for (int i {0}; i <= 20; i++)
    {
        if (! (i & 1)) {    // (i % 2 == 0)  check if i is even
            std::cout << i << std::endl;
        }
    }
    
    return 0;
}