#include <iostream>

int main() {
    short int x = 0xAABB;
    char* ptr = (char*)&x;

    printf( "%x\n", *ptr);

    /*if (*ptr == 0xbb) {
        std::cout << "Little Endian" << std::endl;
        std::cout << *ptr << std::endl;
    } else {
        std::cout << "Big Endian" << std::endl;
        std::cout << *ptr << std::endl;
    }*/

    return 0;
}