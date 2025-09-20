#include <iostream>
#include <cstring>

//lass MyString;
//void operator++(MyString& lhv);
//MyString operator+(const MyString& lhv, const MyString& rhv);
//std::ostream& operator<<(std::ostream& output, const MyString& rhv);
//std::istream& operator>>(std::istream& input, MyString& rhv);

class MyString
{
    private:
        char* str;
    public:
        MyString(): str(nullptr) 
        {
            std::cout << "Default Constractor...\n";
        }
        MyString(char* source)
        {
            std::cout << "Paramtrized Constractor...\n";
            str = new char[strlen(source) + 1];
            strcpy(str, source);
        }
        MyString(const MyString& source): MyString(source.str)
        {
            std::cout << "Deep Copy Constractor...\n";
        }
        MyString(MyString&& source)
        {
            std::cout << "Move Constractor...\n";
            str = source.str;
            source.str = nullptr;
        }
        void operator=(const MyString& source)
        {
            std::cout << "Deep Operator = ...\n";
            if (str != nullptr)
                delete[] str;
            
            str = new char[strlen(source.str) + 1];
            strcpy(str, source.str);
        }
        void operator=(MyString&& source)
        {
            std::cout << "Move Operator = ...\n";
            if (str != nullptr)
                delete[] str;

            str = source.str;
            source.str = nullptr;
        }
        friend void operator++(MyString& lhv);
       /* void operator++()
        {
            int i {0};
            while (str[i] != '\0')
            {
                if (islower(str[i]))
                    str[i] = toupper(str[i]);
                
                i++;
            }   
        }*/
        void operator--()
        {
            int i {0};
            while (str[i] != '\0')
            {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
                
                i++;
            }   
        }
        friend MyString operator+(const MyString& lhv, const MyString& rhv);
       /* MyString operator+(const MyString& source)
        {
            char* buffer = new char[strlen(str) + strlen(source.str) + 1];
            strcpy(buffer, str);
            strcat(buffer, source.str);
            MyString temp(buffer);
            delete[] buffer;
            return temp;
        }*/
        MyString operator-(char* source)
        {
            char* ptr = strstr(str, source);
            if (ptr != nullptr)
            {
                char* current = str;
                char* buffer = new char[strlen(str) - strlen(source) + 1];
                int i = 0;
                while (current < ptr)
                {
                    buffer[i++] = *current++; 
                }
                current += strlen(source);
                while (*current)
                {
                    buffer[i++] = *current++; 
                }
                buffer[i] = '\0';
                MyString temp(buffer);
                delete[] buffer;
                return temp;
            }
            else
            {
                return *this;
            }
        }
        bool operator==(const MyString& source)
        {
            if (str != nullptr && source.str != nullptr)
                return strcmp(str, source.str) ? false:true;
            else
                return false;
        }

        friend std::ostream& operator<<(std::ostream& output, const MyString& rhv);
       // friend std::istream& operator>>(std::istream& input, MyString& rhv);

        void Display()
        {
            if (str)
                std::cout << str << std::endl;
        }
        ~MyString()
        {
            if (str)
            {
                std::cout << "Destractor...\n";
                delete[] str;
            }
            
        }
};

void operator++(MyString& lhv)
{
    int i {0};
    while (lhv.str[i] != '\0')
    {
    if (islower(lhv.str[i]))
        lhv.str[i] = toupper(lhv.str[i]);
                
    i++;
    }   
}

MyString operator+(const MyString& lhv, const MyString& rhv)
{
    char* buffer = new char[strlen(lhv.str) + strlen(rhv.str) + 1];
    strcpy(buffer, lhv.str);
    strcat(buffer, rhv.str);
    MyString temp(buffer);
    delete[] buffer;
    return temp;
}

std::ostream& operator<<(std::ostream& output, const MyString& rhv)
{
    output << rhv.str;
    return output;
}

std::istream& operator>>(std::istream& input, MyString& rhv)
{
    char* buffer = new char[1000];
    input >> buffer;
    rhv = buffer;
    delete[] buffer;
    return input;
}

int main() {
    /*MyString obj1 = "Waleed";
    obj1.Display();

    MyString obj2 = obj1;
    obj2.Display();

    MyString obj3 = std::move(obj2);
    obj3.Display();

    MyString obj4 = "Mohammed";
    obj4 = obj3;
    obj4.Display();
    obj4 = "Neama";  // MyString("Neama"), casted to temp object to assign "Neama" into it,
                     // the temp object will be deleted after move operator = is finished
                     // you can prove it by destractor
    obj4.Display();
    ++obj4;
    obj4.Display();
    --obj4;
    obj4.Display();*/
/*
    MyString obj5 = "Mahmoud";
    MyString obj6 = "Farag";
    MyString obj7;
    obj7 = obj5 + " " + obj6;
    obj7.Display();

    MyString obj8 = obj7 - "ara";
    obj8.Display();

    std::cout << std::boolalpha << (obj5 == obj6) << std::endl;
    ++obj8;
    obj8.Display();*/

    MyString obj8;
    std::cin >> obj8;
    std::cout << obj8 << std::endl;

    return 0;
}