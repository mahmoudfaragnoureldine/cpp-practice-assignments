#include <iostream>

template<typename T, int size>
class Stack
{
    private:
        T* ptr;
        int i = 0;
        int j = 0;
    public:
        Stack(): ptr(nullptr) {}
        Stack(T* ptr)
        {
            this->ptr = new T[size];
            this->ptr = ptr;
        }
        void puch(int value) const
        {
            ptr[size - i] = value;
            i++;
            if (i == size)
            {
                i = 0;
            }
            
        }
        void pop()
        {
            ptr[size - i] = nullptr;
            j++;
            if (j == size)
            {
                j = 0;
            }
        }
        void display()
        {
            for (auto i : ptr)
            {
                std::cout << i << std::endl;
            }
            
        }

};

int main() {
    int array[] = {1,2,3,4,5};
    Stack<int,5> obj1(array);
    obj1.display();
    return 0;
}