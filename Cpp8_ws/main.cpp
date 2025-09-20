#include <iostream>

template<typename T>
void sum(T n, T x)
{
    std::cout << (1 + 2x + 3x + ... + nx) << std::endl;
}
int main() {

    std::cout << "************************************************\n";
    std::cout << "This is application that calculates this formula:\n";
    std::cout << "      sum = 1 + 2x + 3x + ... + nx\n";
    std::cout << "************************************************\n";

    std::cout << "The sumation when we enter int is ";
    sum<int>(4, 10);
    std::cout << "Where x is " << 4 << " and n is " << 10 << std::endl;
    
    std::cout << "The sumation when we enter int is ";
    sum<double>(2.156, 5);
    std::cout << "Where x is " << 2.156 << " and n is " << 5 << std::endl;
    return 0;
}