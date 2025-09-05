#include <iostream>

/*
int main(int argc, char* argv[]) 
{
    std::cout << "number of elements: " << argc <<  std::endl;
    std::cout << "argv[1]: " << argv[1] << std::endl;
    std::cout << "argv[2]: " << argv[2] << std::endl;
    return 0;
}
*/

int main()
{
    int x;
    float y;
    std::cout << "Enter X value: ";
    std::cin >> x;
    std::cout << "Enter Y value: ";
    while(std::cin.get() != '\n');
    std::cin >> y;

    std::cout << "Value of X: " << x << std::endl;
    std::cout << "Value of Y: " << y << std::endl;

    return 0;
}