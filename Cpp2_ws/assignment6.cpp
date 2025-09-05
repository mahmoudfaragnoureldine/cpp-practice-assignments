#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> vec {"blue", "red", "green", "orange"};

    std::cout << "Vector before capitalize is: " << std::endl;
    for (std::string i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    

    std::cout << "Vector after capitalize is: " << std::endl;
    for (int i {0}; i < vec.size(); i++)
    {   
        for (int j {0}; j < 1; j++)
        {
            vec[i][j] = toupper(vec[i][j]);
        }
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}