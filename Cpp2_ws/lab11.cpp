/*Write a code that ask the user to
 enter 10 numbers and then print
 out the summation of these
 numbers.*/

 #include <iostream>

 int main() {
    int arr[10]{0};
    int sum{0};

    for (int i{0}; i < 10; i++)
    {
        std::cout << "Enter number " << i << " : ";
        std::cin >> arr[i];

        sum += arr[i];
    }

    std::cout << "The summation of the entered number is : " << sum << std::endl;
    
    return 0;
 }