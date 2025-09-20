#include <iostream>
#include <chrono>

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        Date(): day(0), month(0), year(0) {}
        void setDate(int day, int month, int year)
        {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void getDate() const
        {
            std::cout << "Input day: " << day << std::endl;
            std::cout << "Input month: " << month << std::endl;
            std::cout << "Input year: " << year << std::endl;
        }
        void checkDate()
        {
            std::chrono::year_month_day ymd {
                std::chrono::year{this->year}, 
                std::chrono::month{this->month}, 
                std::chrono::day{this->day}
            };
            if (ymd.ok())
            {
                std::cout << "The date is valid.\n";
            }
            else
                std::cout << "The date is not valid.\n";
            
        
        }
};

int main() {
    Date date1;
    date1.setDate(32, 7 , 2020);
    date1.getDate();
    date1.checkDate();

    return 0;
}