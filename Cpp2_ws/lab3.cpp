#include <iostream>

int main() {
    int num{0};
    int sum{0};

    for (int i{0}; i < 10; i++)
    {
        std::cout <<"Enter number " << i+ 1 << " : ";
        std::cin >> num;
        sum += num;
    }

    std::cout << "The summation of the entered 10 numbers is : " << sum << std::endl;
    
    return 0;
}