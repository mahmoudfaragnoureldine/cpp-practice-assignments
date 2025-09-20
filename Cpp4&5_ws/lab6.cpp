#include <iostream>

class Integer
{
    private:
        int* ptr;
    public:
        Integer(): ptr(nullptr) {}  // Integer int1;
        Integer(int value)          // Integer int1(8)
        {
            ptr = new int;
            *ptr = value;
        }
        Integer(const Integer& source)  // Integer int2 = int1
        {
            ptr = new int;
            *ptr = *source.ptr;
        }
        Integer(Integer&& source)       // Integer int3 = std::move(int1)
        {
            ptr = new int;
            *ptr = *source.ptr;
            source.ptr = nullptr;
        }
        void setValue(int value)
        {
            *ptr = value;
        }
        int getValue() const
        {
            if (ptr)
                return *ptr;
        }
        Integer& operator=(const Integer& source)        // int3 = int2
        {
            if (this == &source)
            {
                return *this;
            }
            delete ptr;
            ptr = new int;
            ptr = source.ptr;
            return *this; 
        }
        Integer& operator=(Integer&& source)        // int3 = int2
        {
            std::cout << "Move Operator Calling..." << std::endl;
            if (this == &source)
            {
                return *this;
            }
            delete ptr;
            ptr = new int;
            ptr = source.ptr;
            source.ptr = nullptr;
            return *this; 
        }
        Integer operator+(const Integer& source) const      // int1 + int2
        {
            int* buffer = new int;
            *buffer = *ptr + *source.ptr;
            Integer temp(*buffer);
            delete buffer;
            return temp;
        }
        Integer operator-(const Integer& source) const        
        {
            int* buffer = new int;
            *buffer = *ptr - *source.ptr;
            Integer temp(*buffer);
            delete buffer;
            return temp;
        }
        Integer operator*(const Integer& source) const        
        {
            int* buffer = new int;
            *buffer = *ptr * *source.ptr;
            Integer temp(*buffer);
            delete buffer;
            return temp;
        }
        Integer operator++()
        {
            *ptr = *ptr + 1;
            return *this;
        }
        Integer operator--()
        {
            *ptr = *ptr - 1;
            return *this;
        }
        bool operator>(const Integer& source)
        {
            return (*ptr > *source.ptr);
        }
        bool operator!=(const Integer& source)
        {
            return (*ptr != *source.ptr);
        }
        friend std::ostream& operator<<(std::ostream& output, const Integer& source);
        ~Integer()
        {
            if(ptr)
                delete ptr;
        }

};

std::ostream& operator<<(std::ostream& output, const Integer& source)
{
    output << *source.ptr;
    return output;
}

std::istream& operator>>(std::istream& input, Integer& source)
{
    int* buffer = new int;
    input >> *buffer;
    source = Integer(*buffer);
    delete buffer;
    return input;
}

int main() {
    Integer int1;
    std::cout << "Please enter a number to be added as object from class: ";
    std::cin >> int1;
    std::cout << "The number you have entered after being saved as object is ";
    std::cout << int1 << std::endl;
    
    return 0;
}