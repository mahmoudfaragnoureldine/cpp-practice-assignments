#include <iostream>
#include <string>

int main() {
    std::string str = "Ah@@m#e$d";
    
    int i {0};
    while (str[i] != '\0')
    {
        if (! isalpha(str[i]))
        {
            str.erase(i, 1);
            continue;
        }
        i++;
    }
    std::cout << str << std::endl;

    return 0;
}