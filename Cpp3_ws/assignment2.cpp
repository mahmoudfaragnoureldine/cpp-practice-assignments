#include <iostream>
#include <vector>

int Add(std::vector<int> &vec);
int Subtract(std::vector<int> &vec);
int Multiply(std::vector<int> &vec);
int Divide(std::vector<int> &vec);

int main() {
    std::vector<int> vec(2);
    int num {0};
    int result {0};

    std::cout << "Choose opreation:\n1.  Add\n2.  Subtract\n3.  Multiply\n4.  Divide\n";
    std::cin >> num;

    std::cout << "Enter two numbers: ";
    for (int i {0}; i < 2; i++)
    {
        std::cin >> vec.at(i);
       // vec.at(i) = result;
    }
    
    switch (num)
    {
        case 1:
            result = Add(vec);
            break;

        case 2:
            result = Subtract(vec);
            break;

        case 3:
            result = Multiply(vec);
            break;

        case 4:
            result = Divide(vec);
            break;
    
        default:
            std::cout << "Wrong number.\n"; 
            return 1; // Exit with error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

int Add(std::vector<int> &vec) 
{
    return (vec.at(0) + vec.at(1));
}

int Subtract(std::vector<int> &vec)
{
    return (vec[0] - vec[1]) ;
}

int Multiply(std::vector<int> &vec)
{
    return vec[0] * vec[1];
}

int Divide(std::vector<int> &vec)
{
    if (vec[1] == 0) {
        std::cout << "Error: Division by zero is not allowed.\n";
        return 1; // Return an error code
    }
    return vec[0] / vec[1];
}