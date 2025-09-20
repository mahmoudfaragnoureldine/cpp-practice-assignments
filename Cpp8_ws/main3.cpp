#include<iostream>

template<typename T>
class PointerUtility
{
    private:
        T* ptr;
    public:
        PointerUtility(T* ptr)
        {
            this->ptr = new T;
            this->ptr = ptr;
        }
        void getValue() const
        {
            std::cout << *ptr << std::endl;
        }
        bool isNull() const
        {
            if (ptr == nullptr)
                return true;
            else
                return false;
        }
        
};