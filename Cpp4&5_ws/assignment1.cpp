#include <iostream>

class ComplexNumber 
{
    private:
        int real;
        int imag;
    public:
        ComplexNumber(int _real = 0, int _imag = 0): real(_real), imag(_imag) {}
        ComplexNumber(const ComplexNumber& source)
        {
            real = source.real;
            imag = source.imag;
        }
        ComplexNumber operator+(const ComplexNumber& source)
        {
            real += source.real;
            imag += source.imag;
            ComplexNumber temp(real, imag);
            return temp;
        }
        void getNumber() const 
        {
            std::cout << real << " + " << imag << "j" << std::endl;
        }
};

int main() {
    ComplexNumber num1(2, 3);
    ComplexNumber num2(3, 7);

    num1 + num2;

    num1.getNumber(); 
    return 0;
}