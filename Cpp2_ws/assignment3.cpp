#include <iostream>
#include <string>

int main() {
    std::string name = {"HelloFromCppCourse"};
    std::string result;
    result += name[0]; // Start with the first character

    for (int i = 1; i < name.length(); i++) {
        if (isupper(name[i])) {
            result += ' '; // Add a space before uppercase letters
        } 
        result += name[i]; // Add the current character
    }

    std::cout << result << std::endl;
    
    return 0;
}