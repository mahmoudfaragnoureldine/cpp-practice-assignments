#include <iostream>
#include <vector>

void enter_array(std::vector<int> &ref);
void modify(std::vector<int> &ref);
void print_container(std::vector<int> &ref);


int main() {
    std::vector<int> vec;

    enter_array(vec);

    modify(vec);

    print_container(vec);

    return 0;
}


void enter_array(std::vector<int> &ref)
{
    int size {0};
    int num {0};
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array: ";
    for (int i {0}; i < size; i++)
    {
        std::cin >> num;
        ref.push_back(num);
    }
}

void modify(std::vector<int> &ref)
{
    for (int i = 0; i < ref.size(); i++)
    {
        for (int j = (i + 1); j < ref.size(); j++)
        {
            if (ref.at(i) == ref.at(j))
            {
                ref.erase(ref.begin() + j);
            }
            
        }
    }
    
}

void print_container(std::vector<int> &ref)
{
    for (int i = 0; i < ref.size(); i++)
    {
        std::cout << ref.at(i) << " ";
    }
    std::cout << std::endl;
}