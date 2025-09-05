/*Write a code that ask the user how many numbers he
 want to store and then take these numbers from the user.
 the program shall print the numbers in reverse order*/

 #include <iostream>
 #include <vector>

 int main() {
    std::vector<int> vec1;
    int size{0};
    int num{0};

    std::cout << "Please enter how many numbers you want to provide : ";
    std::cin >> size;


    for (int i{0}; i < size; i++)
    {
        std::cout << "Enter number " << i << " : ";
        std::cin >> num;
        vec1.push_back(num);
    }

    for (int i{size - 1}; i >= 0; i--)
    {
        std::cout << vec1.at(i) << std::endl;
    }
    
    
    return 0;
 }