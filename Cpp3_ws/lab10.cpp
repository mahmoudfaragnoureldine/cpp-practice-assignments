/*Write a function that prints the elements of vector using
 references and this function have to handle that changing
 the values inside it is not allowed*/

#include <iostream>
#include <vector>

void print(const std::vector<std::string> &vec) {
    for (auto i : vec)
    {
        std::cout << i << std::endl;
    }
    
}

int main() {
    std::vector<std::string> vec {"Waleed", "Mahmoud", "Neama", "Zeina", "Mohammed"};

    print(vec);

    return 0;
}